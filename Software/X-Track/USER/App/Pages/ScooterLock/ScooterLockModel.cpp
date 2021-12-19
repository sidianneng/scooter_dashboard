#include "ScooterLockModel.h"

using namespace Page;

uint32_t ScooterLockModel::GetData()
{
    return lv_tick_get();
}
