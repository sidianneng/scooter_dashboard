#ifndef __SCOOTERSETTING_VIEW_H
#define __SCOOTERSETTING_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterSettingView
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        lv_obj_t* label_cruise;
        lv_obj_t* cruise_check;

        lv_obj_t* label_energy;
        lv_obj_t* energy_dd;
    } ui;

private:
    void cruise_Create(lv_obj_t* root);
    void energy_Create(lv_obj_t* root);
};

}

#endif // !__VIEW_H
