#include "ScooterLockModel.h"

using namespace Page;

uint32_t ScooterLockModel::GetData()
{
    return lv_tick_get();
}

void ScooterLockModel::Init()
{
    account = new Account("ScooterLockModel", DataProc::Center(), 0, this);
    account->Subscribe("HalfDuplexSerial");
}

void ScooterLockModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterLockModel::LockScooter()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
	
    serInfo.command = 0;
    serInfo.parameter = true;
    
    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}
	
void ScooterLockModel::UnlockScooter()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;
	
    serInfo.command = 0;
    serInfo.parameter = false;
    
    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}

