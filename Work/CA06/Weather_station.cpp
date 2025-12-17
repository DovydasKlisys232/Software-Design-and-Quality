
#include "Weather_station.h"
#include "Temperature_sensor.h"

Weather_station::Weather_station() : transmissionInterval(2000){
    display = new Display();
    Sensors[0] = new Temperature_Sensor();
    memoryBanks[0] = new Memory_bank();
}

SensorData Weather_station::readSensors() {
    // read data from sensors
}

void Weather_station::saveData(SensorData data) {
    // save data function
}

void Weather_station::setDisplayState(int btnId) {
    //sets the display mode 
}

void Weather_station::transferData(SensorData data) {
    //transfers the data from sensors to satellite
}

void Weather_station::scheduleTransmission(int interval) {
    //sets the interval of transmission
}