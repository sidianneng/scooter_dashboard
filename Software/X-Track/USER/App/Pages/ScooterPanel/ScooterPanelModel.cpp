#include "ScooterPanelModel.h"

using namespace Page;

void ScooterPanelModel::Init()
{
    account = new Account("ScooterPanelModel", DataProc::Center(), 0, this);

    account->Subscribe("SCOOTER");
}

void ScooterPanelModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}

uint32_t ScooterPanelModel::GetData()
{
    return lv_tick_get();
}

void ScooterPanelModel::GetScooterInfo(uint8_t* speed, uint8_t* battery)
{
	HAL::Scooter_Info_t scooter;
	memset(&scooter, 0, sizeof(scooter));
	
	account->Pull("SCOOTER", &scooter, sizeof(scooter));
	*speed = scooter.speed;
	*battery = scooter.battery;
}
