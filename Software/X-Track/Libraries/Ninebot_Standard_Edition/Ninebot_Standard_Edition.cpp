#include "Ninebot_Standard_Edition.h"

//local value for digital tube decode
//-----------------------------------------------------------------------------
static bool SCL_Level, SDA_Level;
static uint8_t i2c_slave_status = I2C_SLAVE_STOP;
static uint8_t i2c_f_byte_cnt = 0;
static uint8_t i2c_s_byte_cnt = 0;
static uint8_t i2c_f_byte = 0x00;
static uint8_t i2c_s_byte = 0x00;
static uint8_t i2c_rec[5] = {0}; //store the data receive from digital tube

static uint8_t scl_int_en = 0;

//digital tube buffer data
static uint8_t spd_num_buf[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x79, \
																0x07, 0x7f, 0x6f};
//-----------------------------------------------------------------------------

void Digital_Tube_Decode_Scl(void)
{
	if(scl_int_en) {
		SDA_Level = digitalRead(DIGITAL_TUBE_SDA_PIN);
		SCL_Level = digitalRead(DIGITAL_TUBE_SCL_PIN);
		if(!SCL_Level)
			return;
		if(i2c_slave_status == I2C_SLAVE_START) {
			if(i2c_f_byte_cnt < 8) {
				i2c_f_byte = (i2c_f_byte << 1) | SDA_Level;
				i2c_f_byte_cnt++;
			} else {
				i2c_slave_status = I2C_SLAVE_F_BYTE;
			}
		} else if(i2c_slave_status == I2C_SLAVE_F_BYTE) {
			if(i2c_s_byte_cnt < 8) {
				i2c_s_byte = (i2c_s_byte << 1) | SDA_Level;
				i2c_s_byte_cnt++;
			} else {
				i2c_slave_status = I2C_SLAVE_STOP;
				if(i2c_f_byte == 0x68)
					i2c_rec[0] = i2c_s_byte;
				else if(i2c_f_byte == 0x6a)
					i2c_rec[1] = i2c_s_byte;
				else if(i2c_f_byte == 0x6c)
					i2c_rec[2] = i2c_s_byte;
				else if(i2c_f_byte == 0x6e)
					i2c_rec[3] = i2c_s_byte;
				else if(i2c_f_byte == 0x48)
					i2c_rec[4] = i2c_s_byte;
				i2c_f_byte_cnt = 0;
				i2c_f_byte = 0x00;
				i2c_s_byte_cnt = 0;
				i2c_s_byte = 0x00;
				
				scl_int_en = 0;
			}	
		}
	}
}

void Digital_Tube_Decode_Sda(void)
{
	SCL_Level = digitalRead(DIGITAL_TUBE_SCL_PIN);
	if(SCL_Level == SET) {
		SDA_Level = digitalRead(DIGITAL_TUBE_SDA_PIN);
		if(SDA_Level == SET) {
			i2c_slave_status = I2C_SLAVE_STOP;
			i2c_f_byte_cnt = 0;
			i2c_f_byte = 0x00;
			i2c_s_byte_cnt = 0;
			i2c_s_byte = 0x00;
			scl_int_en = 0;
		} else {
			i2c_slave_status = I2C_SLAVE_START;
			scl_int_en = 1;
		}
	}
}

Ninebot_Standard::Ninebot_Standard(void)
{
}

bool Ninebot_Standard::begin(void)
{	
	//initialize the digital tube decode GPIO
	attachInterrupt(DIGITAL_TUBE_SCL_PIN, Digital_Tube_Decode_Scl, \
		EXTI_Trigger_Rising_Falling);
	attachInterrupt(DIGITAL_TUBE_SDA_PIN, Digital_Tube_Decode_Sda, \
		EXTI_Trigger_Rising_Falling);
	
	return true;
}

uint8_t Ninebot_Standard::Get_Speed(void)
{
	uint8_t single, ten;
	uint8_t speed;
	
	for(single = 0; single < sizeof(spd_num_buf); ++single)
		if((i2c_rec[0] & 0x7f) == spd_num_buf[single])
			break;
	for(ten = 0; ten < sizeof(spd_num_buf); ++ten)
		if((i2c_rec[1] & 0x7f) == spd_num_buf[ten])
			break;
		
	speed = (ten >= sizeof(spd_num_buf) ? 0 : ten) * 10 + \
		(single >= sizeof(spd_num_buf) ? 0 : single);
		
	return speed;	
}

uint8_t Ninebot_Standard::Get_Battery(void)
{
	return (i2c_rec[3] & 0x1f);
}

uint32_t Ninebot_Standard::Get_Other_Icons(void)
{
	return (i2c_rec[0] << 16 | i2c_rec[1] << 8 | i2c_rec[2] << 0);
}

