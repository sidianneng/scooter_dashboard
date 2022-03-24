#include "HAL.h"
#include "Ninebot_Standard_Edition/Ninebot_Standard_Edition.h"

typedef Ninebot_Standard SCOOTER_CLASS;

static SCOOTER_CLASS scooter_specify_hardware;

static HAL::CommitFunc_t CommitFunc = nullptr;
static HAL::CommitFunc_t CommitFunc2 = nullptr;
static void* UserData = nullptr;

void HAL::Scooter_Specify_Hardware_Init()
{
    scooter_specify_hardware.begin();
}

void HAL::Scooter_Update()
{
		Scooter_Info_t scooter_info;
	
		scooter_info.speed = scooter_specify_hardware.Get_Speed();
		scooter_info.battery = scooter_specify_hardware.Get_Battery();
		scooter_info.other_icons = scooter_specify_hardware.Get_Other_Icons();
	
		//Serial.printf("scooter speed = %d\n", scooter_info.speed);
		//Serial.printf("scooter batter = %d\n", scooter_info.battery);
	
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

void HAL::Scooter_Handle_UI_Cmd(uint16_t command, uint16_t parameter)
{
	scooter_specify_hardware.HandleCmd(command, parameter);
}

void HAL::HalfDuplexSerial_Update()
{
	#if 0
		HalfDuplexSerial_BSP_Info_t halfduplexserial_bsp_info;
	
		halfduplexserial_bsp_info.remain_battery = 66;
	
		if(CommitFunc2)
    {
        CommitFunc2(&halfduplexserial_bsp_info, UserData);
    }
	#endif
}

void HAL::HalfDuplexSerial_SetCommitCallback(CommitFunc_t func, void* userData)
{
	#if 0
		CommitFunc2 = func;
    UserData = userData;
	#endif
}

