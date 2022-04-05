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
	
	halfduplexserial_bsp_info.remain_battery = \
	    halfduplexserial.Get_Remain_Bat();
	halfduplexserial_bsp_info.remain_mileage = \
	    halfduplexserial.Get_Remain_Mileage();
	halfduplexserial_bsp_info.total_mileage = \
	    halfduplexserial.Get_Total_Mileage();
	
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
		    info->remain_battery = halfduplexserial.Get_Remain_Bat();
			  info->remain_mileage = halfduplexserial.Get_Remain_Mileage();
        info->total_mileage = halfduplexserial.Get_Total_Mileage();
		} else if(info->command == 0x03){
			/*
			Why there is a 50 ms delay?
			Because if we want to get the state of Cruise,
			we need to send cmd to mother board first.
			Then we can get the reply from it.There will
			be a delay in it.So we need to add a delay here.
			*/
				delay(50);
        info->cruise_contrl = halfduplexserial.Get_Cruise_State();
		} else if(info->command == 0x05){
			/*
			Why there is a 50 ms delay?
			Because if we want to get the state of Recovery,
			we need to send cmd to mother board first.
			Then we can get the reply from it.There will
			be a delay in it.So we need to add a delay here.
			*/
			  delay(50);
        info->energy_recovery = halfduplexserial.Get_Recovery_State();
		}	else {
        halfduplexserial.HandleCmd(info->command, info->parameter);
		}
}
