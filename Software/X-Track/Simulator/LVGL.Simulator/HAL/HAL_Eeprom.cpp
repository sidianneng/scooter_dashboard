#include "HAL.h"
#include <string.h>
#include "lvgl/lvgl.h"

#define EEPROM_START_ADDR 0x00

#define EEPROM_ADDRESS 0x50

static uint8_t pwd_data_store[PWD_MAX_LEN] = {0xff};

void HAL::EEPROM_Init()
{

}

void HAL::EEPROM_Handle_UI_Cmd(EEPROM_Info_t* info)
{
    switch(info->command)
		{
        case HAL::EEPROM_READ:
                memcpy(info->pwd_buf, pwd_data_store, info->length);
                LV_LOG_USER("pwd_data_store:%s len:%d\n", pwd_data_store, info->length);
				break;
        case HAL::EEPROM_WRITE:
              memset(pwd_data_store, 0xff, sizeof(pwd_data_store));
              memcpy(pwd_data_store, info->pwd_buf, info->length);
              LV_LOG_USER("HAL write new pwd to eeprom,pwd:%s, len:%d\n", \
                  info->pwd_buf, info->length);
				break;
			default:
				break;
		}
}

