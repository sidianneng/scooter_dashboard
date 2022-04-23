#include "HAL.h"
#include "Eeprom24C01_02/Eeprom24C01_02.h"

#define EEPROM_START_ADDR 0x00

#define EEPROM_ADDRESS 0x50

static Eeprom24C01_02 eeprom(EEPROM_ADDRESS, CONFIG_EEPROM_WP_PIN);

void HAL::EEPROM_Init()
{
    Serial.printf("EEPROM: init...\n");
    eeprom.initialize();
}

void HAL::EEPROM_Handle_UI_Cmd(EEPROM_Info_t* info)
{
    switch(info->command)
	{
		case HAL::EEPROM_READ:
			eeprom.readBytes(EEPROM_START_ADDR, info->length, info->pwd_buf);
			Serial.printf("eeprom read: len=%d\n", info->length);
			for(int i = 0;i < info->length; ++i)
				Serial.printf("%d ", info->pwd_buf[i]);
			Serial.printf("\n");
		break;
		case HAL::EEPROM_WRITE:
			eeprom.writeBytes(EEPROM_START_ADDR, info->length, info->pwd_buf);
			Serial.printf("eeprom write: len=%d\n", info->length);
			for(int i = 0;i < info->length; ++i)
				Serial.printf("%d ", info->pwd_buf[i]);
			Serial.printf("\n");
		break;
		default:
		break;
	}
}

