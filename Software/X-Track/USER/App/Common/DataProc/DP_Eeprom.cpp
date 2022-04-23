#include "DataProc.h"
#include "../HAL/HAL.h"

static int onEvent(Account* account, Account::EventParam_t* param)
{
    if (param->event != Account::EVENT_NOTIFY)
    {
        return Account::RES_UNSUPPORTED_REQUEST;
    }

    if (param->size != sizeof(HAL::EEPROM_Info_t))
    {
        return Account::RES_SIZE_MISMATCH;
    }
		
		HAL::EEPROM_Info_t* info = (HAL::EEPROM_Info_t*)param->data_p;
		
		HAL::EEPROM_Handle_UI_Cmd(info);
		
		return 0;
}

DATA_PROC_INIT_DEF(Eeprom)
{
  account->SetEventCallback(onEvent);
}
