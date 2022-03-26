#include "HalfDuplexSerial.h"

//local value for halfduplex serial
//-----------------------------------------------------------------------------
#define COUNTOF(a)                       (sizeof(a) / sizeof(*(a)))
#define USART2_TX_BUFFER_SIZE            (COUNTOF(usart2_tx_buffer) - 1)
#define USART3_TX_BUFFER_SIZE            (COUNTOF(usart3_tx_buffer) - 1)

uint8_t usart2_tx_buffer[64];
uint8_t usart3_tx_buffer[64];
uint8_t usart2_rx_buffer[USART3_TX_BUFFER_SIZE];
uint8_t usart3_rx_buffer[USART2_TX_BUFFER_SIZE];
uint8_t usart2_tx_counter = 0x00;
uint8_t usart3_tx_counter = 0x00;
uint8_t usart2_rx_counter = 0x00; 
uint8_t usart3_rx_counter = 0x00;
uint8_t usart2_tx_buffer_size = USART2_TX_BUFFER_SIZE;
uint8_t usart3_tx_buffer_size = USART3_TX_BUFFER_SIZE;

uint8_t tx_rx_flag = 0;

uint8_t uart2_tx_en = 0;
uint8_t uart3_tx_en = 0;

uint8_t s_usart2_rx_buffer[128] = {0};
uint8_t s_usart3_rx_buffer[128] = {0};
uint8_t s_usart2_rx_cnt = 0;
uint8_t s_usart3_rx_cnt = 0;
uint8_t s_usart2_rx_max = 9;
uint8_t s_usart3_rx_max = 9;
uint8_t s_usart2_tx_cnt = 0;
uint8_t s_usart3_tx_cnt = 0;

uint32_t uart1_rx_cnt = 0;
//-----------------------------------------------------------------------------

//local value for UI command
//-----------------------------------------------------------------------------
static bool Ui_Cmd_flag = false;
static uint8_t Ui_Cmd_cnt = 0;
static uint8_t Ui_Cmd_len = 0;
static uint8_t Ui_Cmd_buf[32] = {0};
//-----------------------------------------------------------------------------

extern "C" void USART2_IRQHandler(void)
{
	uint8_t temp = 0x00;
  if(USART_GetITStatus(USART2, USART_INT_RDNE) != RESET)
  {
    /* read one byte from the receive data register */
		temp = USART_ReceiveData(USART2);
		if(s_usart3_rx_cnt == 2){
			if(s_usart3_rx_buffer[s_usart3_rx_cnt-2] == 0x5a && s_usart3_rx_buffer[s_usart3_rx_cnt-1] == 0xa5)
				uart1_rx_cnt++;
				if(uart1_rx_cnt == 1)
					s_usart3_rx_max = 45;
				else if(uart1_rx_cnt == 2)
					s_usart3_rx_max = 24;
				else {
					uart1_rx_cnt = 2;
					s_usart3_rx_max += temp;
				}
		}
    s_usart3_rx_buffer[s_usart3_rx_cnt++] = temp;

		if(s_usart3_rx_cnt >= s_usart3_rx_max)
    {
      USART_INTConfig(USART3, USART_INT_TDE, ENABLE);
			s_usart2_tx_cnt = 0;
			uart2_tx_en = 1;
    }
		USART_ClearITPendingBit(USART2, USART_INT_RDNE);
  }

	if(USART_GetITStatus(USART2, USART_INT_TDE) != RESET && uart3_tx_en)
  {
    if(Ui_Cmd_flag && !s_usart3_tx_cnt){
			USART_SendData(USART2, Ui_Cmd_buf[Ui_Cmd_cnt++]);
			if(Ui_Cmd_cnt >= Ui_Cmd_len)
			{
				USART_INTConfig(USART2, USART_INT_TDE, DISABLE);
				Ui_Cmd_cnt = 0;
				Ui_Cmd_flag = false;
				s_usart2_rx_max = 9;
				s_usart2_rx_cnt = 0;
				uart3_tx_en = 0;
			}
		} else {
			USART_SendData(USART2, s_usart2_rx_buffer[s_usart3_tx_cnt++]);

			if(s_usart3_tx_cnt >= s_usart2_rx_max)
			{
				USART_INTConfig(USART2, USART_INT_TDE, DISABLE);
				s_usart2_rx_max = 9;
				s_usart2_rx_cnt = 0;
				uart3_tx_en = 0;
			}
		}
  }
}

extern "C" void USART3_IRQHandler(void)
{
	uint8_t temp = 0x00;
	if(USART_GetITStatus(USART3, USART_INT_RDNE) != RESET) {		
		temp = USART_ReceiveData(USART3);
		if(s_usart2_rx_cnt == 2) {
			if(s_usart2_rx_buffer[s_usart2_rx_cnt-2] == 0x5a && \
				s_usart2_rx_buffer[s_usart2_rx_cnt-1] == 0xa5)
				s_usart2_rx_max += temp;
		}
		s_usart2_rx_buffer[s_usart2_rx_cnt++] = temp;
		
		if(s_usart2_rx_cnt >= s_usart2_rx_max) {
			USART_INTConfig(USART2, USART_INT_TDE, ENABLE);
			s_usart3_tx_cnt = 0;
			uart3_tx_en = 1;
		}
		USART_ClearITPendingBit(USART3, USART_INT_RDNE);
	}
	
  if(USART_GetITStatus(USART3, USART_INT_TDE) != RESET && uart2_tx_en)
  {
    /* write one byte to the transmit data register */
    USART_SendData(USART3, s_usart3_rx_buffer[s_usart2_tx_cnt++]);
		
		if(s_usart2_tx_cnt >= s_usart3_rx_max) {
			USART_INTConfig(USART3, USART_INT_TDE, DISABLE);
			s_usart3_rx_max = 9;
			s_usart3_rx_cnt = 0;
			uart2_tx_en = 0;
		}
  }	
}

static void Init_Halfduplex_Serial(void)
{
	GPIO_InitType GPIO_InitStructure;
  USART_InitType USART_InitStructure;
  NVIC_InitType NVIC_InitStructure;
	
	//init the usart2
	RCC_APB2PeriphClockCmd(RCC_APB2PERIPH_GPIOA, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1PERIPH_USART2, ENABLE);
	
	//GPIO_PinsRemapConfig(GPIO_Remap_USART2, ENABLE);
	
	GPIO_StructInit(&GPIO_InitStructure);
  GPIO_InitStructure.GPIO_Pins =  GPIO_Pin_2;
  GPIO_InitStructure.GPIO_MaxSpeed = GPIO_MaxSpeed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;//GPIO_Mode_OUT_OD;//GPIO_Mode_AF_PP;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
	
  NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);

  USART_StructInit(&USART_InitStructure);
  USART_InitStructure.USART_BaudRate = 115200;
  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
  USART_InitStructure.USART_StopBits = USART_StopBits_1;
  USART_InitStructure.USART_Parity = USART_Parity_No;
  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
  USART_Init(USART2, &USART_InitStructure);
	
	USART_HalfDuplexCmd(USART2, ENABLE);

	USART_INTConfig(USART2, USART_INT_RDNE, ENABLE);
	
	//init the usart3	
	RCC_APB1PeriphClockCmd(RCC_APB1PERIPH_USART3, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2PERIPH_GPIOB, ENABLE);
	
	GPIO_StructInit(&GPIO_InitStructure);
  GPIO_InitStructure.GPIO_Pins =  GPIO_Pin_10;
  GPIO_InitStructure.GPIO_MaxSpeed = GPIO_MaxSpeed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;//GPIO_Mode_AF_PP;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
  NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
	
  USART_StructInit(&USART_InitStructure);
  USART_InitStructure.USART_BaudRate = 115200;
  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
  USART_InitStructure.USART_StopBits = USART_StopBits_1;
  USART_InitStructure.USART_Parity = USART_Parity_No;
  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
  USART_Init(USART3, &USART_InitStructure);
	
	USART_HalfDuplexCmd(USART3, ENABLE);

  USART_INTConfig(USART3, USART_INT_RDNE, ENABLE);

	//open the serial
	USART_Cmd(USART2, ENABLE);
	USART_Cmd(USART3, ENABLE);
}

HalfDuplexSerial::HalfDuplexSerial(void)
{
}

bool HalfDuplexSerial::begin(void)
{
	//initialize the serial for data communication
	/*
		Why not use the HardwareSerial class of Arduino?
		Because we need to enable halfduplex feature of usart.
		And we need to enable both TX and RX interrupt of usart.
		With the Arduino API, we can't achieve this.
	*/
	Init_Halfduplex_Serial();
	
	return true;
}

uint8_t HalfDuplexSerial::Get_Remain_Bat(void)
{
	return 66;
}

uint8_t HalfDuplexSerial::Get_Remain_Mileage(void)
{
	return 16;
}

uint32_t HalfDuplexSerial::Get_Total_Mileage(void)
{
	return 123400;
}

void HalfDuplexSerial::HandleCmd(uint16_t command, uint16_t parameter)
{
    uint8_t cmd_buf_lock[]   = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x70, 0x01, 0x00, 0x2b, 0xff};
		uint8_t cmd_buf_unlock[] = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x71, 0x01, 0x00, 0x2a, 0xff};
    if(command == 0){
        if(parameter == 0){
            memcpy(Ui_Cmd_buf, cmd_buf_unlock, sizeof(cmd_buf_unlock));
            Ui_Cmd_len = sizeof(cmd_buf_unlock);
				} else {
            memcpy(Ui_Cmd_buf, cmd_buf_lock, sizeof(cmd_buf_lock));
            Ui_Cmd_len = sizeof(cmd_buf_lock);
				}
				Ui_Cmd_cnt = 0;
				Ui_Cmd_flag = true;
    }
}
