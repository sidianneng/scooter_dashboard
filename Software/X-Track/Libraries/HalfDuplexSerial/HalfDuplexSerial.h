#ifndef __HALFDUPLEXSERIAL_H
#define __HALFDUPLEXSERIAL_H

#include "Arduino.h"

#define MAX_MILEAGE 25

class HalfDuplexSerial
{
public:
	HalfDuplexSerial(void);
	bool begin(void);
	
	uint8_t Get_Remain_Bat(void); //uint:1%
	uint8_t Get_Remain_Mileage(void); //unit:meter
	uint32_t Get_Total_Mileage(void); //unit:meter

  uint8_t Get_Cruise_State(void);
  uint8_t Get_Recovery_State(void);
	
	void HandleCmd(uint16_t command, uint16_t parameter);
};

#define MAX_SERIAL_BUF_LEN	64

#define MOTHER_IRQ_HANDLER()        void USART2_IRQHandler(void)
#define DASH_IRQ_HANDLER()          void USART3_IRQHandler(void)
	
#define MOTHER_FIRST_PKT_LEN	45
#define MOTHER_SECOND_PKT_LEN	24

#define MIN_PKT_LEN						9

typedef struct
{	
	//mother board serial
	bool mother_tx_en;
	uint8_t mother_tx_cnt;
	uint8_t mother_rx_max;
	uint8_t mother_rx_cnt;
	uint8_t mother_rx_buf[MAX_SERIAL_BUF_LEN];	
	uint8_t mother_rx_flag_cnt;
	
	//dash board serial
	bool dash_tx_en;
	uint8_t dash_tx_cnt;
	uint8_t dash_rx_max;
	uint8_t dash_rx_cnt;
	uint8_t dash_rx_buf[MAX_SERIAL_BUF_LEN];
		
	//UI data tx and rx
	bool ui_get_recv_data;
	bool ui_cmd_en;
	uint8_t ui_cmd_cnt;
	uint8_t ui_cmd_len;
	uint8_t ui_rx_buf[MAX_SERIAL_BUF_LEN];
	uint8_t ui_tx_buf[MAX_SERIAL_BUF_LEN];
	
	//packet header
	uint8_t HDS_header[2];
}HalfDuplexSerial_Interface;

#endif
