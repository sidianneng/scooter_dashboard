#include "HalfDuplexSerial.h"

static HalfDuplexSerial_Interface HDSerial = {
	.mother_rx_max = MIN_PKT_LEN,
	.dash_rx_max   = MIN_PKT_LEN,
	.HDS_header[0] = 0x5a,
	.HDS_header[1] = 0xa5,
};

extern "C" MOTHER_IRQ_HANDLER()
{
	//mother board data receive
	if(USART_GetITStatus(USART2, USART_INT_RDNE) != RESET){
		uint8_t temp = USART_ReceiveData(USART2);
		if(HDSerial.mother_rx_cnt == 2){
			if(HDSerial.mother_rx_buf[HDSerial.mother_rx_cnt - 2] == \
				HDSerial.HDS_header[0] && \
			HDSerial.mother_rx_buf[HDSerial.mother_rx_cnt - 1] == \
				HDSerial.HDS_header[1])
				HDSerial.mother_rx_flag_cnt++;
			if(HDSerial.mother_rx_flag_cnt == 1)
				HDSerial.mother_rx_max = MOTHER_FIRST_PKT_LEN;
			else if(HDSerial.mother_rx_flag_cnt == 2)
				HDSerial.mother_rx_max = MOTHER_SECOND_PKT_LEN;
			else {
				HDSerial.mother_rx_flag_cnt = 2;
				HDSerial.mother_rx_max += temp;
			}
		}
    HDSerial.mother_rx_buf[HDSerial.mother_rx_cnt++] = temp;

		if(HDSerial.mother_rx_cnt >= HDSerial.mother_rx_max)
    {
			if(HDSerial.ui_get_recv_data){
				  memcpy(HDSerial.ui_rx_buf, HDSerial.mother_rx_buf, \
									HDSerial.mother_rx_cnt - 1);
					HDSerial.ui_get_recv_data = false;
			}
      USART_INTConfig(USART3, USART_INT_TDE, ENABLE);
			HDSerial.dash_tx_cnt = 0;
			HDSerial.dash_tx_en = true;
    }
		USART_ClearITPendingBit(USART2, USART_INT_RDNE);
	}
	
	//mother board data transfer
	if(USART_GetITStatus(USART2, USART_INT_TDE) != RESET && \
		HDSerial.mother_tx_en){
    if(HDSerial.ui_cmd_en && !HDSerial.mother_tx_cnt){
			USART_SendData(USART2, HDSerial.ui_tx_buf[HDSerial.ui_cmd_cnt++]);
			if(HDSerial.ui_cmd_cnt >= HDSerial.ui_cmd_len)
			{
				HDSerial.ui_cmd_cnt = 0;
				HDSerial.ui_cmd_en = false;
				HDSerial.dash_rx_max = MIN_PKT_LEN;
				HDSerial.dash_rx_cnt = 0;
				HDSerial.mother_tx_en = 0;
				HDSerial.ui_get_recv_data = true;
				USART_INTConfig(USART2, USART_INT_TDE, DISABLE);
				USART_INTConfig(USART2, USART_INT_RDNE, ENABLE);
			}
		} else {
			USART_SendData(USART2, HDSerial.dash_rx_buf[HDSerial.mother_tx_cnt++]);

			if(HDSerial.mother_tx_cnt >= HDSerial.dash_rx_max)
			{
				USART_INTConfig(USART2, USART_INT_TDE, DISABLE);
				HDSerial.dash_rx_max = MIN_PKT_LEN;
				HDSerial.dash_rx_cnt = 0;
				HDSerial.mother_tx_en = false;
			}
		}
	}
}

extern "C" DASH_IRQ_HANDLER()
{
	//dash board data receive
	if(USART_GetITStatus(USART3, USART_INT_RDNE) != RESET) {		
		uint8_t temp = USART_ReceiveData(USART3);
		if(HDSerial.dash_rx_cnt == 2) {
			if(HDSerial.dash_rx_buf[HDSerial.dash_rx_cnt - 2] == 0x5a && \
				HDSerial.dash_rx_buf[HDSerial.dash_rx_cnt - 1] == 0xa5)
				HDSerial.dash_rx_max += temp;
		}
		HDSerial.dash_rx_buf[HDSerial.dash_rx_cnt++] = temp;
		
		if(HDSerial.dash_rx_cnt >= HDSerial.dash_rx_max) {
			USART_INTConfig(USART2, USART_INT_TDE, ENABLE);
			HDSerial.mother_tx_cnt = 0;
			HDSerial.mother_tx_en = true;
		}
		USART_ClearITPendingBit(USART3, USART_INT_RDNE);
	}
	
	//dash board data transfer
  if(USART_GetITStatus(USART3, USART_INT_TDE) != RESET && HDSerial.dash_tx_en)
  {
    USART_SendData(USART3, HDSerial.mother_rx_buf[HDSerial.dash_tx_cnt++]);
		
		if(HDSerial.dash_tx_cnt >= HDSerial.mother_rx_max) {
			USART_INTConfig(USART3, USART_INT_TDE, DISABLE);
			HDSerial.mother_rx_max = 9;
			HDSerial.mother_rx_cnt = 0;
			HDSerial.dash_tx_en = false;
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
	return HDSerial.ui_rx_buf[13];
}

uint8_t HalfDuplexSerial::Get_Remain_Mileage(void)
{
	return MAX_MILEAGE * Get_Remain_Bat() / 100;
}

uint32_t HalfDuplexSerial::Get_Total_Mileage(void)
{
	return HDSerial.ui_rx_buf[24] << 24 | HDSerial.ui_rx_buf[23] << 16 |\
		HDSerial.ui_rx_buf[22] << 8 | HDSerial.ui_rx_buf[21];
}

uint8_t HalfDuplexSerial::Get_Cruise_State(void)
{
	return HDSerial.ui_rx_buf[7];
}

uint8_t HalfDuplexSerial::Get_Recovery_State(void)
{
	return HDSerial.ui_rx_buf[7];
}

void HalfDuplexSerial::HandleCmd(uint16_t command, uint16_t parameter)
{
    uint8_t cmd_buf_lock[]   = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x70, 0x01, 0x00, 0x2b, 0xff};
		uint8_t cmd_buf_unlock[] = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x71, 0x01, 0x00, 0x2a, 0xff};
		uint8_t cmd_buf_getsta[] = {0x5a, 0xa5, 0x01, 0x3e, 0x20, 0x01, 0xb0, 0x20, 0xcf, 0xfe};
		uint8_t cmd_buf_getcruise[] = {0x5a, 0xa5, 0x01, 0x3e, 0x20, 0x01, 0x7c, 0x02, 0x21, 0xff};
		uint8_t cmd_buf_getrecv[] =   {0x5a, 0xa5, 0x01, 0x3e, 0x20, 0x01, 0x7b, 0x02, 0x22, 0xff};
		uint8_t cmd_buf_setcruise[] = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x7c, 0x01, 0x00, 0x1f, 0xff, \
		                               0x5a, 0xa5, 0x01, 0x3e, 0x20, 0x01, 0x7c, 0x02, 0x21, 0xff};
		uint8_t cmd_buf_setrecovery[] = {0x5a, 0xa5, 0x02, 0x3e, 0x20, 0x03, 0x7b, 0x02, 0x00, 0x1f, 0xff,\
		                               0x5a, 0xa5, 0x01, 0x3e, 0x20, 0x01, 0x7b, 0x02, 0x22, 0xff};
		
    if(command == 0){
        if(parameter == 0){
            memcpy(HDSerial.ui_tx_buf, cmd_buf_unlock, sizeof(cmd_buf_unlock));
            HDSerial.ui_cmd_len = sizeof(cmd_buf_unlock);
				} else {
            memcpy(HDSerial.ui_tx_buf, cmd_buf_lock, sizeof(cmd_buf_lock));
            HDSerial.ui_cmd_len = sizeof(cmd_buf_lock);
				}
    } else if(command == 1){
        memcpy(HDSerial.ui_tx_buf, cmd_buf_getsta, sizeof(cmd_buf_getsta));
        HDSerial.ui_cmd_len = sizeof(cmd_buf_getsta);
		} else if(command == 2){
        memcpy(HDSerial.ui_tx_buf, cmd_buf_getcruise, sizeof(cmd_buf_getcruise));
        HDSerial.ui_cmd_len = sizeof(cmd_buf_getcruise);
		} else if(command == 4){
        memcpy(HDSerial.ui_tx_buf, cmd_buf_getrecv, sizeof(cmd_buf_getrecv));
        HDSerial.ui_cmd_len = sizeof(cmd_buf_getrecv);
		} else if(command == 6){
        cmd_buf_setcruise[7] = parameter;
			  if(parameter != 0)
					cmd_buf_setcruise[9] = 0x1f;
				else
					cmd_buf_setcruise[9] = 0x20;
        memcpy(HDSerial.ui_tx_buf, cmd_buf_setcruise, sizeof(cmd_buf_setcruise));
        HDSerial.ui_cmd_len = sizeof(cmd_buf_setcruise);
		} else if(command == 7){
			  cmd_buf_setrecovery[7] = parameter;
			  if(parameter == 0)
					cmd_buf_setrecovery[9] = 0x21;
				else if(parameter == 1)
					cmd_buf_setrecovery[9] = 0x20;
				else if(parameter == 2)
					cmd_buf_setrecovery[9] = 0x1f;
        memcpy(HDSerial.ui_tx_buf, cmd_buf_setrecovery, sizeof(cmd_buf_setrecovery));
        HDSerial.ui_cmd_len = sizeof(cmd_buf_setrecovery);
		}
		HDSerial.ui_cmd_cnt = 0;
		HDSerial.ui_cmd_en = true;
}
