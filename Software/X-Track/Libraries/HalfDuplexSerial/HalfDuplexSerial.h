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
	
	void HandleCmd(uint16_t command, uint16_t parameter);
};

#endif
