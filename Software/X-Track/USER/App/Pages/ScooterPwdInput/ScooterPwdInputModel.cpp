#include "ScooterPwdInputModel.h"

using namespace Page;

uint32_t ScooterPwdInputModel::GetData()
{
    return lv_tick_get();
}

void ScooterPwdInputModel::Init()
{
    account = new Account("ScooterPwdInputModel", DataProc::Center(), 0, this);
    account->Subscribe("HalfDuplexSerial");
}

void ScooterPwdInputModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

void ScooterPwdInputModel::UnlockScooter()
{
    HAL::HalfDuplexSerial_BSP_Info_t serInfo;

    serInfo.command = 0;
    serInfo.parameter = false;

    account->Notify("HalfDuplexSerial", &serInfo, sizeof(serInfo));
}
