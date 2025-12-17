#ifndef SENSORDATA_H
#define SENSORDATA_H

/**
 * @enum DataView
 * @brief Enumeration for different display modes
 */
enum DataView {
    real_time,           ///< Real-time sensor readings
    hourly_historical,   ///< Hourly historical data
    daily_historical     ///< Daily historical data
}; 

/**
 * @class SensorData
 * @brief Data structure to hold sensor readings 
 */
class SensorData {
private:
    float temperature;
    float windSpeed;
    float pressure;

public:
    /**
     * @brief default constructor
     */
    SensorData() : temperature(0.0), windSpeed(0.0), pressure(0.0) {}

    /**
     * @brief constructor
     */
    SensorData(float temp, float wind, float press) : temperature(temp), windSpeed(wind), pressure(press) {}

};

#endif