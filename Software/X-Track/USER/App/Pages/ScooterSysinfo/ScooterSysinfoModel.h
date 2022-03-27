#ifndef __SCOOTERSYSINFO_MODEL_H
#define __SCOOTERSYSINFO_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{

class ScooterSysinfoModel
{
public:
    uint32_t TickSave;
    uint32_t GetData();

    void Init();
    void Deinit();
    void Send_Get_State_Cmd();
    void Get_Mile_State(uint8_t* rem_bat, uint8_t* rem_mile, \
			uint32_t* total_mile);
private:
    Account* account;
};

}

#endif
