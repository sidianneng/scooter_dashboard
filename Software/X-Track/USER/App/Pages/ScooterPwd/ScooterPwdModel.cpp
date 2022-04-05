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
