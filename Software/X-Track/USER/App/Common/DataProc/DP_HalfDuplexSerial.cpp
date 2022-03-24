#include "DataProc.h"
#include "../HAL/HAL.h"

static int onEvent(Account* account, Account::EventParam_t* param)
{
    if (param->event != Account::EVENT_NOTIFY)
    {
        return Account::RES_UNSUPPORTED_REQUEST;
    }

    if (param->size != sizeof(DataProc::HalfDuplexSerial_UI_Info_t))
    {
        return Account::RES_SIZE_MISMATCH;
    }

    DataProc::HalfDuplexSerial_UI_Info_t* info = (DataProc::HalfDuplexSerial_UI_Info_t*)param->data_p;

    HAL::Scooter_Handle_UI_Cmd(info->command, info->parameter);

    return 0;
}

DATA_PROC_INIT_DEF(HalfDuplexSerial)
{
  account->SetEventCallback(onEvent);
	HAL::HalfDuplexSerial_SetCommitCallback([](void* info, void* userData){
        Account* account = (Account*)userData;
        return account->Commit(info, sizeof(HAL::HalfDuplexSerial_BSP_Info_t));
    }, account);
}
