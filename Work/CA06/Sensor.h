#ifndef SENSOR_H
#define SENSOR_H

#include "SensorData.h"

/**
 * @class Sensor
 * @brief Abstract base class for all sensor types
 * 
 * Provides interface for reading sensor data. Derived classes
 * must implement the read() method for specific sensor types.
 */

class Sensor {
public:
    /**
     * @brief Pure virtual function to read sensor data
     * @return SensorData object containing the reading
     */
    virtual SensorData read() = 0;

};

#endif