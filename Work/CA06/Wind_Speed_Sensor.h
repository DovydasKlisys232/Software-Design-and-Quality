#ifndef WIND_SPEED_SENSOR_H
#define WIND_SPEED_SENSOR_H

#include "Sensor.h"

/**
 * @class Wind_Speed_Sensor
 * @brief A sensor class that measures wind speed. 
 * 
 * Implements the Sensor interface to provide wind speed
 */
class Wind_Speed_Sensor : public Sensor {
public:
    /**
     * @brief constructor
     */
    Wind_Speed_Sensor();

    /**
     * @brief Reads wind speed data from sensor
     * @return SensorData containing wind speed reading
     */
    SensorData read() override;
};

#endif