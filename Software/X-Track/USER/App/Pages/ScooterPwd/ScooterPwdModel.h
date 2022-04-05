#ifndef __SCOOTERPWD_MODEL_H
#define __SCOOTERPWD_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{

class ScooterPwdModel
{
public:
    uint32_t TickSave;
    uint32_t GetData();

    void Init();
    void Deinit();
    void UnlockScooter();
private:
    Account* account;

};

}

#endif
