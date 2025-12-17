#ifndef PRESSURE_SENSOR_H
#define PRESSURE_SENSOR_H

#include "Sensor.h"

/**
 * @class Pressure_Sensor
 * @brief Concrete sensor class for measuring atmospheric pressure
 * 
 * Implements the Sensor interface to provide barometric pressure
 * readings from the connected pressure sensor hardware.
 */
class Pressure_Sensor : public Sensor {
public:
    /**
     * @brief constructor
     */
    Pressure_Sensor();

    /**
     * @brief Reads pressure data from sensor
     * @return SensorData containing pressure reading
     */
    SensorData read() override;
};

#endif