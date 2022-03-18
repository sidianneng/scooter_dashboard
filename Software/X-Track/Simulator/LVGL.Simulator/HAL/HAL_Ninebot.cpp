#include "HAL.h"
#include <stdlib.h>
#include "Common/DataProc/DataProc.h"

static HAL::CommitFunc_t CommitFunc = nullptr;
static void* UserData = nullptr;

void HAL::Scooter_Update()
{
	Scooter_Info_t scooter_info;
	
	scooter_info.speed = rand() % 20;
	scooter_info.battery = rand() % 5;
	
	if(CommitFunc)
    {
        CommitFunc(&scooter_info, UserData);
    }
}

void HAL::Scooter_SetCommitCallback(CommitFunc_t func, void* userData)
{
	CommitFunc = func;
    UserData = userData;
}
