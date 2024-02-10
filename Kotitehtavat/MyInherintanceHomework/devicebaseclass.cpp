#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    // cout << "DeviceBaseClass constructor" << endl;
}

void DeviceBaseClass::setDeviceID()
{
    cout << "Enter device ID: ";
    cin >> deviceID;
}

void DeviceBaseClass::getDeviceID()
{
    cout << "Device ID: " << deviceID << endl;
}
