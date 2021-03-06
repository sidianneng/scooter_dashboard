#ifndef __HAL_DEF_H
#define __HAL_DEF_H

#include <stdint.h>

namespace HAL
{

/* Clock */
typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t week;
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
    uint16_t millisecond;
} Clock_Info_t;

/* GPS */
typedef struct
{
    double longitude;
    double latitude;
    float altitude;
    float course;
    float speed;
    int16_t satellites;
    bool isVaild;
    Clock_Info_t clock;
} GPS_Info_t;

/* MAG */
typedef struct
{
    int16_t x;
    int16_t y;
    int16_t z;
} MAG_Info_t;

/* IMU */
typedef struct
{
    int16_t ax;
    int16_t ay;
    int16_t az;
    int16_t gx;
    int16_t gy;
    int16_t gz;
    int16_t steps;
} IMU_Info_t;

/* SportStatus */
typedef struct
{
    uint32_t lastTick;

    float weight;

    float speedKph;
    float speedMaxKph;
    float speedAvgKph;

    union
    {
        uint32_t totalTimeUINT32[2];
        uint64_t totalTime;
    };

    float totalDistance;

    union
    {
        uint32_t singleTimeUINT32[2];
        uint64_t singleTime;
    };

    float singleDistance;
    float singleCalorie;
    
} SportStatus_Info_t;

/* Power */
typedef struct
{
    uint16_t voltage;
    uint8_t usage;
    bool isCharging;
} Power_Info_t;

/* Scooter Panel*/
typedef struct
{
	uint8_t speed;
	uint8_t battery;
	uint32_t other_icons;
} Scooter_Info_t;

/* HalfDuplexSerial commit data to UI */
typedef struct
{
	uint16_t command;
	uint16_t parameter;
	
	uint8_t remain_battery;
	uint8_t remain_mileage;
	uint32_t total_mileage;
	
	bool cruise_contrl;
	uint8_t energy_recovery;
}HalfDuplexSerial_BSP_Info_t;

/* EEPROM read or write*/
typedef enum {
	EEPROM_READ = 0,
	EEPROM_WRITE
} EEPROM_CMD;

#define PWD_MAX_LEN 16
#define DEFAULT_PWD "666"

typedef struct
{
    EEPROM_CMD command;
	uint16_t length;
	
	uint8_t pwd_buf[16];
} EEPROM_Info_t;

}

#endif
