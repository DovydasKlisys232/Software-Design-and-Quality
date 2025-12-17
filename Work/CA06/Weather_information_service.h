#ifndef WEATHER_INFORMATION_SERVICE_H
#define WEATHER_INFORMATION_SERVICE_H

#include "SensorData.h"
/**
 * @class Weather_information_service
 * @brief Manages satellite communication for data transmission
 * 
 * Handles transmission of weather data to external systems
 * via satellite link.
 */
class Weather_information_service {
public:
    /**
     * @brief Transfers sensor data via satellite
     * @param data SensorData to transmit
     * @return true if transmission was successful, else return false
     */
    bool transfer(SensorData data) { }
};

#endif