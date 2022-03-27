#include "ScooterSysinfoModel.h"

using namespace Page;

uint32_t ScooterSysinfoModel::GetData()
{
    return lv_tick_get();
}

void ScooterSysinfoModel::Init()
{
    account = new Account("ScooterSysinfoModel", DataProc::Center(), 0, this);
    account->Subscribe("HalfDuplexSerial");
}

void ScooterSysinfoModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterSysinfoModel::Send_Get_State_Cmd()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
	
    serInfo.command = 1;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

void ScooterSysinfoModel::Get_Mile_State(uint8_t* rem_bat, uint8_t* rem_mile, \
	uint32_t* total_mile)
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
	
    serInfo.command = 0xff;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));    

    *rem_bat = serInfo.remain_battery;
    *rem_mile = serInfo.remain_mileage;
    *total_mile = serInfo.total_mileage;
}
