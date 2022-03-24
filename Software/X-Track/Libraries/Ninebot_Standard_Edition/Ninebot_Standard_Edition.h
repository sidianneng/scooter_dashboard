#ifndef __NINEBOT_STANDARD_EDITION_H
#define __NINEBOT_STANDARD_EDITION_H

#include "Arduino.h"

enum {
	ENERGY_RECOVERY_CLOSE = 0,
	ENERGY_RECOVERY_SLIGHT,
	ENERGY_RECOVERY_MODERATE,
	ENERGY_RECOVERY_HIGH
};

enum {
	I2C_SLAVE_STOP = 0,
	I2C_SLAVE_START,
	I2C_SLAVE_F_BYTE,
	I2C_SLAVE_S_BYTE
};

class Ninebot_Standard
{
public:
	Ninebot_Standard(void);
	bool begin(void);
	
	//main screen
	uint8_t Get_Speed(void);
	uint8_t Get_Battery(void);
	uint32_t Get_Other_Icons(void);
	void HandleCmd(uint16_t command, uint16_t parameter);
	//bool Set_Btn_Sta(uint8_t state);
#if 0	
	//lock
	bool Lock_Scooter(void);
	bool Unlock_Scooter(void);
	
	//systeminfo
	uint8_t Get_Remaining_Miles(void);
	uint8_t Get_Remaining_Bat(void);
	uint32_t Get_Total_Mileage(void);
	
	//system setting
	bool Set_Cruise_Sta(bool state);
	bool Set_Energy_Recovery(Energy_Recovery state);
#endif
	
};

#endif
