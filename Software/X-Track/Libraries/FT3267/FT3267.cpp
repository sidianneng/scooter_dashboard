#include "FT3267.h"
#include "Wire.h"
#include <math.h>

//Register map
#define FT3267_DEVIDE_MODE          0x00
#define FT3267_GEST_ID              0x01
#define FT3267_TD_STATUS            0x02

#define FT3267_TOUCH1_XH            0x03
#define FT3267_TOUCH1_XL            0x04
#define FT3267_TOUCH1_YH            0x05
#define FT3267_TOUCH1_YL            0x06
#define FT3267_TOUCH1_WEIGHT        0x07
#define FT3267_TOUCH1_MISC          0x08

#define FT3267_ID_G_LIB_VERSION_H   0xa1
#define FT3267_ID_G_LIB_VERSION_L   0xa2
#define FT3267_ID_G_CIPHER          0xa3
#define FT3267_ID_G_MODE            0xa4
#define FT3267_ID_G_FIRMID          0xa6

FT3267::FT3267(uint8_t reset, uint8_t interrupt)
{
    RST = reset;
    INT = interrupt;
}

bool FT3267::begin(uint8_t addr)
{
		uint8_t i = 0;
		uint8_t chip_id = 0x00;
    Address = addr;

    pinMode(RST, OUTPUT);
		pinMode(INT, INPUT);
		
		digitalWrite(RST, HIGH);
		delay(1);
    digitalWrite(RST, LOW);
    delay(10);
    digitalWrite(RST, HIGH);
    delay(100);
#if 1	
		do{
			chip_id = ReadReg(FT3267_ID_G_CIPHER);
            i++;
			Serial.print("chipid: ");
			Serial.print(i);
			Serial.print(" ");
			Serial.println(chip_id);
			if((chip_id==0x06)||(chip_id==0x36)||(chip_id==0x64)||(chip_id==0x33))
				break;
			delay(50);
		}while(i < 20);
#endif
    return IsConnected();
}

bool FT3267::IsConnected()
{
    return 1;
}

void FT3267::TP_Get_Position(uint16_t* pos_x, uint16_t* pos_y)
{
    uint8_t buf[4];
#if 0
    ReadRegs(FT3267_TOUCH1_XH, buf, sizeof(buf));
#else
	buf[1] = ReadReg(FT3267_TOUCH1_XL);
	buf[3] = ReadReg(FT3267_TOUCH1_YL);
#endif
    *pos_x = buf[1];
    *pos_y = buf[3];
#if 1
	Serial.print("tp: ");
	Serial.print(buf[1]);
	Serial.print(" ");
	Serial.print(buf[3]);
	Serial.println();
#endif
}

void FT3267::WriteReg(uint8_t reg, uint8_t data)
{
    Wire.beginTransmission(Address);
    Wire.write(reg);
    Wire.write(data);
    Wire.endTransmission();
}

uint8_t FT3267::ReadReg(uint8_t reg)
{
    Wire.beginTransmission(Address);
    Wire.write(reg);
    Wire.endTransmission();

    Wire.requestFrom(Address, 1);
    uint8_t data = Wire.read();
    Wire.endTransmission();

    return data;
}

void FT3267::ReadRegs(uint8_t reg, uint8_t* buf, uint16_t len)
{
    Wire.beginTransmission(Address);
    Wire.write(reg);
    Wire.endTransmission();

    Wire.requestFrom(Address, len);
    for(int i = 0; i < len; i++)
    {
        buf[i] = Wire.read();
    }
    Wire.endTransmission();
}
