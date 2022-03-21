#include "Ninebot_Standard_Edition.h"

//local value for digital tube decode
//-----------------------------------------------------------------------------
static bool SCL_Level, SDA_Level;
static uint8_t i2c_slave_status = I2C_SLAVE_STOP;
static uint8_t i2c_f_byte_cnt = 0;
static uint8_t i2c_s_byte_cnt = 0;
static uint8_t i2c_f_byte = 0x00;
static uint8_t i2c_s_byte = 0x00;
static uint8_t i2c_rec[5] = {0}; //store the data receive from digital tube

static uint8_t scl_int_en = 0;

//digital tube buffer data
static uint8_t spd_num_buf[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x79, \
																0x07, 0x7f, 0x6f};
//-----------------------------------------------------------------------------
																
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

void Digital_Tube_Decode_Scl(void)
{
	if(scl_int_en) {
		SDA_Level = digitalRead(DIGITAL_TUBE_SDA_PIN);
		SCL_Level = digitalRead(DIGITAL_TUBE_SCL_PIN);
		if(!SCL_Level)
			return;
		if(i2c_slave_status == I2C_SLAVE_START) {
			if(i2c_f_byte_cnt < 8) {
				i2c_f_byte = (i2c_f_byte << 1) | SDA_Level;
				i2c_f_byte_cnt++;
			} else {
				i2c_slave_status = I2C_SLAVE_F_BYTE;
			}
		} else if(i2c_slave_status == I2C_SLAVE_F_BYTE) {
			if(i2c_s_byte_cnt < 8) {
				i2c_s_byte = (i2c_s_byte << 1) | SDA_Level;
				i2c_s_byte_cnt++;
			} else {
				i2c_slave_status = I2C_SLAVE_STOP;
				if(i2c_f_byte == 0x68)
					i2c_rec[0] = i2c_s_byte;
				else if(i2c_f_byte == 0x6a)
					i2c_rec[1] = i2c_s_byte;
				else if(i2c_f_byte == 0x6c)
					i2c_rec[2] = i2c_s_byte;
				else if(i2c_f_byte == 0x6e)
					i2c_rec[3] = i2c_s_byte;
				else if(i2c_f_byte == 0x48)
					i2c_rec[4] = i2c_s_byte;
				i2c_f_byte_cnt = 0;
				i2c_f_byte = 0x00;
				i2c_s_byte_cnt = 0;
				i2c_s_byte = 0x00;
				
				scl_int_en = 0;
			}	
		}
	}
}

void Digital_Tube_Decode_Sda(void)
{
	SCL_Level = digitalRead(DIGITAL_TUBE_SCL_PIN);
	if(SCL_Level == SET) {
		SDA_Level = digitalRead(DIGITAL_TUBE_SDA_PIN);
		if(SDA_Level == SET) {
			i2c_slave_status = I2C_SLAVE_STOP;
			i2c_f_byte_cnt = 0;
			i2c_f_byte = 0x00;
			i2c_s_byte_cnt = 0;
			i2c_s_byte = 0x00;
			scl_int_en = 0;
		} else {
			i2c_slave_status = I2C_SLAVE_START;
			scl_int_en = 1;
		}
	}
}


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

Ninebot_Standard::Ninebot_Standard(void)
{
}

bool Ninebot_Standard::begin(void)
{	
	//initialize the serial for data communication
	/*
		Why not use the HardwareSerial class of Arduino?
		Because we need to enable halfduplex feature of usart.
		And we need to enable both TX and RX interrupt of usart.
		With the Arduino API, we can't achieve this.
	*/
	Init_Halfduplex_Serial();

	//initialize the digital tube decode GPIO
	attachInterrupt(DIGITAL_TUBE_SCL_PIN, Digital_Tube_Decode_Scl, \
		EXTI_Trigger_Rising_Falling);
	attachInterrupt(DIGITAL_TUBE_SDA_PIN, Digital_Tube_Decode_Sda, \
		EXTI_Trigger_Rising_Falling);
	
	return true;
}

uint8_t Ninebot_Standard::Get_Speed(void)
{
	uint8_t single, ten;
	uint8_t speed;
	
	for(single = 0; single < sizeof(spd_num_buf); ++single)
		if((i2c_rec[0] & 0x7f) == spd_num_buf[single])
			break;
	for(ten = 0; ten < sizeof(spd_num_buf); ++ten)
		if((i2c_rec[1] & 0x7f) == spd_num_buf[ten])
			break;
		
	speed = (ten >= sizeof(spd_num_buf) ? 0 : ten) * 10 + \
		(single >= sizeof(spd_num_buf) ? 0 : single);
		
	return speed;	
}

uint8_t Ninebot_Standard::Get_Battery(void)
{
	return (i2c_rec[3] & 0x1f);
}

uint32_t Ninebot_Standard::Get_Other_Icons(void)
{
	return (i2c_rec[0] << 16 | i2c_rec[1] << 8 | i2c_rec[2] << 0);
}

