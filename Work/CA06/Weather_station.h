#ifndef WEATHER_STATION_H
#define WEATHER_STATION_H

#include "Display.h"
#include "Sensor.h"
#include "Memory_bank.h"
#include "Weather_information_service.h"

/**
 * @class Weather_station
 * @brief Main controller for the weather monitoring system
 * 
 * Coordinates sensors, display, memory storage and data transmission
 */
class Weather_station {
private:
    Display* display;   ///< screen which shows the collected data
    
    Sensor* Sensors[3]; ///< array of sensors for colleting data
    
    Memory_bank* memoryBanks[1];    ///< memory storage for weather readings
    
    SensorData currentData; ///< current sensor data reading

    int transmissionInterval;   ///< transmission interval in seconds
public:
    /**
     * @brief Constructor initializes all components in the Weather system
     */
    Weather_station();

    /**
     * @brief Reads data from all connected sensors
     * @return SensorData containing current readings
     */
    SensorData readSensors();
    
    /**
     * @brief Saves sensor data to memory
     * @param data The SensorData to store
     */
    void saveData(SensorData data);
    
    /**
     * @brief Updates the display with current state
     * @param btnId Button identifier for state changes
     */
    void setDisplayState(int btnId);
    
    /**
     * @brief Refreshes the display output
     */
    void updateDisplay();
    
    /**
     * @brief Transfers data to external service
     * @param data SensorData to transmit
     */
    void transferData(SensorData data);
    
    /**
     * @brief Schedules automatic data transmission
     * @param interval Time interval in seconds
     */
    void scheduleTransmission(int interval);
};

#endif