#ifndef __SCOOTERLOCK_MODEL_H
#define __SCOOTERLOCK_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{

class ScooterLockModel
{
public:
    uint32_t TickSave;
    uint32_t GetData();

    void Init();
    void Deinit();
    void LockScooter();
    void UnlockScooter();
private:
    Account* account;
};

}

#endif
