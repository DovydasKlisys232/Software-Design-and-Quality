#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "Sensor.h"

/**
 * @class Temperature_Sensor
 * @brief Represents a temperature sensor.
 */
class Temperature_Sensor : public Sensor {
public:
    /**
     * @brief constructor
     */
    Temperature_Sensor();

    /**
     * @brief Temperature sensor read function imlementation
     */
    SensorData read() override;
};

#endif // TEMPERATURE_SENSOR_H
