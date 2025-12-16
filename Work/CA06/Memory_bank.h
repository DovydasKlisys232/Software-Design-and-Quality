/**
 * Project Untitled
 */


#ifndef _MEMORY_BANK_H
#define _MEMORY_BANK_H

#include "Weather_station.h"


class Memory_bank {
public: 
    Weather_station 1;
    
/**
 * @param dataInterval
 */
SensorData getData(Dataview dataInterval);
    
/**
 * @param data
 */
boolean saveData(SensorData data);
};

#endif //_MEMORY_BANK_H