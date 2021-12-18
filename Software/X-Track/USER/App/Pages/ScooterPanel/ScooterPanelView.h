#ifndef __SCOOTERPANEL_VIEW_H
#define __SCOOTERPANEL_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterPanelView
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        struct
        {
            lv_obj_t* cont;
            lv_obj_t* labelSpeed;
            lv_obj_t* labelUint;

            lv_obj_t* labelBluetooth;
            lv_obj_t* labelWrench;
            lv_obj_t* labelTemperature;
            lv_obj_t* labelSportMode;

            lv_obj_t* labelBatCapacity;
        } panelInfo;

        struct
        {
            lv_obj_t* btnPower;
        } btnCont;

    } ui;

private:
    void PanelInfo_Create(lv_obj_t* par);
    void Button_Create(lv_obj_t* par);
    lv_obj_t* Btn_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs);

};

}

#endif // !__VIEW_H
