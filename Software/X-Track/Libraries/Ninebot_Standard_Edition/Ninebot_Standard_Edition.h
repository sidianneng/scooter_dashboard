#ifndef __NINEBOT_STANDARD_EDITION_H
#define __NINEBOT_STANDARD_EDITION_H

#include "Arduino.h"

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
	
};

#endif
