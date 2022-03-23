#include "ScooterPanelModel.h"

using namespace Page;

void ScooterPanelModel::Init()
{
    account = new Account("ScooterPanelModel", DataProc::Center(), 0, this);

    account->Subscribe("Scooter");
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

void ScooterPanelModel::GetScooterInfo(uint8_t* speed, uint8_t* battery, uint32_t* icons)
{
	HAL::Scooter_Info_t scooter;
	memset(&scooter, 0, sizeof(scooter));
	
	account->Pull("Scooter", &scooter, sizeof(scooter));
	*speed = scooter.speed;
	*battery = scooter.battery;
	*icons = scooter.other_icons;
}
