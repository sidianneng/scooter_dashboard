#include "DataProc.h"
#include "../HAL/HAL.h"

DATA_PROC_INIT_DEF(Scooter)
{
    HAL::Scooter_SetCommitCallback([](void* info, void* userData){
        Account* account = (Account*)userData;
        return account->Commit(info, sizeof(HAL::Scooter_Info_t));
    }, account);
}
