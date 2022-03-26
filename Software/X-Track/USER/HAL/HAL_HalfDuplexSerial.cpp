#include "HAL.h"
#include "HalfDuplexSerial/HalfDuplexSerial.h"

typedef HalfDuplexSerial HALFDUPLEXSERIAL;

static HALFDUPLEXSERIAL halfduplexserial;

static HAL::CommitFunc_t CommitFunc = nullptr;
static void* UserData = nullptr;

void HAL::HalfDuplexSerial_Init(void)
{
	halfduplexserial.begin();
}

void HAL::HalfDuplexSerial_Update()
{
	HalfDuplexSerial_BSP_Info_t halfduplexserial_bsp_info;
	
	halfduplexserial_bsp_info.remain_battery = 66;
	
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

void HAL::HalfDuplexSerial_Handle_UI_Cmd(uint16_t command, uint16_t parameter)
{
	halfduplexserial.HandleCmd(command, parameter);
}
