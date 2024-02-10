#include <iostream>
#include "devicebaseclass.h"
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI deviceUI;
    deviceUI.uiShowMenu();
    deviceUI.uiShowDeviceInformation();
    return 0;
}

