#ifndef __SCOOTERSETTING_VIEW_H
#define __SCOOTERSETTING_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterSettingView
{
public:
    void Create(lv_obj_t* root);
    void Switch_UI_Update(bool state);
    void Roller_UI_Update(uint8_t state);

public:
    struct
    {
        lv_obj_t* label_cruise;
        lv_obj_t* cruise_check;

        lv_obj_t* label_energy;
        lv_obj_t* energy_dd;

        lv_obj_t* config_pwd;
    } ui;

private:
    void cruise_Create(lv_obj_t* root);
    void energy_Create(lv_obj_t* root);
    void pwdset_Create(lv_obj_t* root);
};

}

#endif // !__VIEW_H
