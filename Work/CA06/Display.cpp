#include "Display.h"

Display::Display() : state(real_time) {
    // Constructor 
}

void Display::changState(int btnId) {
    // changes the display state
}

void Display::display_data(SensorData data) {
    // displays the data collected by the sensor
}

SensorData Display::getData(DataView dataInterval) {
    // retrieves data for the fiven mode
}

DataView Display::getState() const {
    //retrives the current set display state
}