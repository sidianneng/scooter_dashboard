#include "HAL.h"
#include <stdlib.h>
#include "Common/DataProc/DataProc.h"

static HAL::CommitFunc_t CommitFunc = nullptr;
static void* UserData = nullptr;

void HAL::HalfDuplexSerial_Init(void)
{
}

void HAL::HalfDuplexSerial_Update()
{
	HalfDuplexSerial_BSP_Info_t halfduplexserial_bsp_info;
	
	halfduplexserial_bsp_info.remain_battery = \
        rand() % 100;
	halfduplexserial_bsp_info.remain_mileage = \
        rand() % 25;
	halfduplexserial_bsp_info.total_mileage = \
	    1234000;
	
	if(CommitFunc)
    {
        CommitFunc(&halfduplexserial_bsp_info, UserData);
    }
}

void HAL::HalfDuplexSerial_SetCommitCallback(CommitFunc_t func, void* userData)
{
    CommitFunc = func;
    UserData = userData;
}

void HAL::HalfDuplexSerial_Handle_UI_Cmd(HalfDuplexSerial_BSP_Info_t* info)
{
    if(info->command == 0xff){
        info->remain_battery = rand() % 100;
		info->remain_mileage = rand() % 25;
        info->total_mileage = 1234000;
	} else {
        printf("halfduplex serial handle cmd:%#x, param:%#x\n", info->command, info->parameter);
	}
}
