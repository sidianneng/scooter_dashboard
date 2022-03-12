#ifndef __FT3267_H
#define __FT3267_H

#include "Arduino.h"

#define FT3267_I2C_ADDRESS    0x38

class FT3267 
{
public:
    FT3267(uint8_t reset, uint8_t interrupt);

    bool begin(uint8_t addr = FT3267_I2C_ADDRESS);

    bool IsConnected();

    void TP_Get_Position(uint16_t* pos_x, uint16_t* pos_y);

		uint8_t Get_Num_of_Point(void);

private:
    uint8_t Address;
    void WriteReg(uint8_t reg, uint8_t dat);
    uint8_t ReadReg(uint8_t reg);
    void ReadRegs(uint8_t reg, uint8_t* buf, uint16_t len);

private:
    uint8_t RST, INT;
};

#endif
