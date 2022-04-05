#ifndef __SCOOTERSETTING_MODEL_H
#define __SCOOTERSETTING_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{

class ScooterSettingModel
{
public:
    uint32_t TickSave;
    uint32_t GetData();

		void Init();
    void Deinit();
    void Send_Get_Cruise_Cmd();
    void Get_Cruise_State(uint8_t* state);
    void Set_Cruise_State(bool state);

    void Send_Get_Recovery_Cmd();
    void Get_Recovery_State(uint8_t* state);
    void Set_Recovery_State(uint8_t state);
private:
    Account* account;

};

}

#endif
