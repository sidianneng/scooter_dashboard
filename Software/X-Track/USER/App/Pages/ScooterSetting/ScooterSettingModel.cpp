#include "ScooterSettingModel.h"

using namespace Page;

uint32_t ScooterSettingModel::GetData()
{
    return lv_tick_get();
}

void ScooterSettingModel::Init()
{
    account = new Account("ScooterSettingModel", DataProc::Center(), 0, this);
    account->Subscribe("HalfDuplexSerial");
}

void ScooterSettingModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterSettingModel::Send_Get_Cruise_Cmd()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 2;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

void ScooterSettingModel::Get_Cruise_State(uint8_t* state)
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 3;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
	
    *state = serInfo.cruise_contrl;
}

void ScooterSettingModel::Set_Cruise_State(bool state)
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 6;
    serInfo.parameter = state;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

void ScooterSettingModel::Send_Get_Recovery_Cmd()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 4;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

void ScooterSettingModel::Get_Recovery_State(uint8_t* state)
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 5;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
	
    *state = serInfo.energy_recovery;
}

void ScooterSettingModel::Set_Recovery_State(uint8_t state)
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
    
    serInfo.command = 7;
    serInfo.parameter = state;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}
