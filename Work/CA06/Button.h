#ifndef BUTTON_H
#define BUTTON_H

/**
 * @class Button
 * @brief Changes data displayed on the Display (real-time, hourly or historical data)
 * 
 * 
 */
class Button {
private:
    int id; ///< unique button identifier
public:
    /**
     * @brief Constructor with button ID
     * @param btnId is the unique identifier for button object
     */
    Button(int btnId) : id(btnId) {}

    /**
     * @brief Interrupt service routine for button press
     * @param btnId Button identifier that was pressed
     */
    void buttonISR(int btnId) {}
};

#endif