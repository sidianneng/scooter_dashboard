#ifndef __SCOOTERSYSINFO_VIEW_H
#define __SCOOTERSYSINFO_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterSysinfoView
{
public:
    void Create(lv_obj_t* root);
    void Ui_Update(uint8_t rem_bat, uint8_t rem_mile, \
			uint32_t total_mile);
public:
    struct
    {
        lv_obj_t* cont;
        lv_obj_t* remainMile;
        lv_obj_t* remainBat;
        lv_obj_t* totalMile;
    } ui;

private:
    lv_obj_t* Info_Create(lv_obj_t* obj,
        const char* labelText, const char* labeltitleText, \
        lv_coord_t x_ofs, lv_coord_t y_ofs);
};

}

#endif // !__VIEW_H
