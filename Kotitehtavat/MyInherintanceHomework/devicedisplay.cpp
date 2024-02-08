#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{
    // cout << "DeviceDisplay constructor" << endl;
}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Enter display resolution: ";
    cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
