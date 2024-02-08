#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{
    // cout << "DeviceTouchPad constructor" << endl;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Enter touchpad sensitivity: ";
    cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
