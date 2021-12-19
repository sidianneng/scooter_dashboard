#include "ScooterSettingModel.h"

using namespace Page;

uint32_t ScooterSettingModel::GetData()
{
    return lv_tick_get();
}
