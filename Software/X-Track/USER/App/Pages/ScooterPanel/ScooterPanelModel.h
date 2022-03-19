#ifndef __SCOOTERPANEL_MODEL_H
#define __SCOOTERPANEL_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{

class ScooterPanelModel
{
public:
    void Init();
    void Deinit();

    uint32_t TickSave;
    uint32_t GetData();

	void GetScooterInfo(uint8_t* speed, uint8_t* battery, uint32_t* icons);

private:
    Account* account;
};

}

#endif
