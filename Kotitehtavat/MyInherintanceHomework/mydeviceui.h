#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

#include <iostream>
using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    int choice;
    DeviceMouse *objectDeviceMouse = new DeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad = new DeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay = new DeviceDisplay;
};

#endif // MYDEVICEUI_H
