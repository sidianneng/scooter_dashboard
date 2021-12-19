#include "ScooterSysinfoModel.h"

using namespace Page;

uint32_t ScooterSysinfoModel::GetData()
{
    return lv_tick_get();
}
