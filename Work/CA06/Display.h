/**
 * Project Untitled
 */


#ifndef _DISPLAY_H
#define _DISPLAY_H

#include "Weather_station.h"


class Display {
public: 
    Weather_station 1;
    
/**
 * @param btnId
 */
void changeState(Integer btnId);
    
/**
 * @param data
 */
void display(SensorData data);
    
/**
 * @param dataInterval
 */
 SensorData getData(DataView dataInterval);
private: 
    DataView state;
};

#endif //_DISPLAY_H