#ifndef MEMORY_BANK_H
#define MEMORY_BANK_H

#include "SensorData.h"

/**
 * @class Weather_station
 * @brief Main controller for the weather monitoring system
 * 
 * Coordinates sensors, display, memory storage and data transmission
 */
class Memory_bank {
public:
    /**
     * @brief Retrieves data from the chosen display mode (real-time, daily historical or hourly historical)
     * @param dataInterval is the type of data being collected
     * @return SensorData for the requested interval
     */
    SensorData getData(DataView dataInterval) {}

    /**
     * @brief saves sensor data to memory
     * @param data SensorData to store in memory 
     * @return true if save was successful, false if failed
     */
    bool saveData(SensorData data) { }
};

#endif