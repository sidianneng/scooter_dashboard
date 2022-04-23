#include "ScooterPwdModel.h"

using namespace Page;

uint32_t ScooterPwdModel::GetData()
{
    return lv_tick_get();
}

void ScooterPwdModel::Init()
{
    account = new Account("ScooterPwdModel", DataProc::Center(), 0, this);
    account->Subscribe("HalfDuplexSerial");
	account->Subscribe("Eeprom");
}

void ScooterPwdModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterPwdModel::UnlockScooter()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
	
    serInfo.command = 0;
    serInfo.parameter = false;
    
    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

void ScooterPwdModel::GetPwdFromEeprom(uint8_t* pwd_buf, uint8_t *pwd_len)
{
    HAL::EEPROM_Info_t eepromInfo;
		uint8_t i;
    
	eepromInfo.command = HAL::EEPROM_READ;//eeprom read
	eepromInfo.length = PWD_MAX_LEN;
	
    account->Notify("Eeprom", &eepromInfo, sizeof(eepromInfo));

    memcpy(pwd_buf, eepromInfo.pwd_buf, sizeof(eepromInfo.pwd_buf));

    for(i = 0;i < sizeof(eepromInfo.pwd_buf); ++i)
        if(eepromInfo.pwd_buf[i] == 0xff)
				    break;
    *pwd_len = i;
}
