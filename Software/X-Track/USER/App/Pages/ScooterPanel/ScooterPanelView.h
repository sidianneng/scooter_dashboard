#ifndef __SCOOTERPANEL_VIEW_H
#define __SCOOTERPANEL_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterPanelView
{
public:
    void Create(lv_obj_t* root);
    void Update_Bat_Icon(uint8_t battery);

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
            lv_obj_t* labelSptMode_b;
            lv_obj_t* labelSptMode_r;

            lv_obj_t* labelBat1;
            lv_obj_t* labelBat2;
            lv_obj_t* labelBat3;
            lv_obj_t* labelBat4;
            lv_obj_t* labelBat5;

            lv_obj_t* labelCharging;

            lv_obj_t* labelKmh;
            lv_obj_t* labelMph;
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
    lv_obj_t* Icon_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs, lv_coord_t y_ofs);

};

}

#endif // !__VIEW_H
