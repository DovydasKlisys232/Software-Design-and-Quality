#ifndef DISPLAY_H
#define DISPLAY_H

#include "SensorData.h"
/**
 * @class Display
 * @brief Handles display output for different viewing modes
 * 
 * Manages the display state and renders sensor data according
 * to the current display mode (real-time, hourly, or daily).
 */
class Display {
private:
    DataView state;

public:
    /**
     * @brief Constructor sets up the display to real-time mode
     */
    Display() : state(real_time) {}

    /**
     * @brief Changes display mode based on the button input
     * @param btnId button identifier is used for changing display modes
     */
    void changState(int btnId) {}

    /**
     * @brief Displays the sensor data on the screen
     * @param data SensorData to be displayed
     */
    void display_data(SensorData data) {}

    /**
     * @brief Retrieves data for a specific display mode
     * @param dataInterval is the chosen display mode (real-time, hourly historical or daily historical)
     * @return SensorData for the chosen display mode
     */
    SensorData getData(DataView dataInterval) {}

    /**
     * @brief Gets current display state
     * @return Returns the current DataView state
     */
    DataView getState() const{
        return state;
    }
};

#endif