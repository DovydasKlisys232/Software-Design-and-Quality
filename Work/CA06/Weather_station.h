/**
 * Project Untitled
 */


#ifndef _WEATHER_STATION_H
#define _WEATHER_STATION_H

#include "Sensor.h"
#include "Button.h"
#include "Display.h"
#include "Memory_bank.h"
#include "Weather_information_service.h"


class Weather_station {
public: 
    Sensor 1..*;
    Button 1..*;
    Display 1;
    Memory_bank 1;
    Weather_information_service 1;
    
SensorData readSensors();
    
/**
 * @param data
 */
void saveData(SensorData data);
    
/**
 * @param btnId
 */
void setDisplayState(Integer btnId);
    
void updateDisplay();
    
/**
 * @param data
 */
void transferData(SensorData data);
    
/**
 * @param interval
 */
void scheduleTransmission(Integer interval);
private: 
    Display display;
    Sensor[1..*] sensors;
    Memory[1..*] memoryBanks;
    SensorData currentData;
};

#endif //_WEATHER_STATION_H