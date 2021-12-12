#include "ScooterPanelModel.h"

using namespace Page;

uint32_t ScooterPanelModel::GetData()
{
    return lv_tick_get();
}
