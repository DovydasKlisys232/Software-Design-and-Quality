#include "SensorData.h"

SensorData::SensorData() : temperature(0.0), windSpeed(0.0), pressure(0.0) {}

SensorData::SensorData(float temp, float wind, float press) : temperature(temp), windSpeed(wind), pressure(press) {
    //constructor
}