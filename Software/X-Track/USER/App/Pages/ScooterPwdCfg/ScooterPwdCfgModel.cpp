#include "ScooterPwdCfgModel.h"

using namespace Page;

void ScooterPwdCfgModel::Init()
{
    account = new Account("ScooterPwdCfgModel", DataProc::Center(), 0, this);
	account->Subscribe("Eeprom");
}

void ScooterPwdCfgModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterPwdCfgModel::GetPwdFromEeprom(uint8_t* pwd_buf, uint8_t *pwd_len)
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

void ScooterPwdCfgModel::SetPwdToEeprom(uint8_t* pwd_buf, uint8_t pwd_len)
{
    HAL::EEPROM_Info_t eepromInfo;
    
	eepromInfo.command = HAL::EEPROM_WRITE;//eeprom write
	eepromInfo.length = PWD_MAX_LEN;

    //Why set all it to oxff?
    //Because the default value of eeprom bytes is 0xff.
    memset(eepromInfo.pwd_buf, 0xff, sizeof(eepromInfo.pwd_buf));

    memcpy(eepromInfo.pwd_buf, pwd_buf, pwd_len);
	
    account->Notify("Eeprom", &eepromInfo, sizeof(eepromInfo));
}
	
