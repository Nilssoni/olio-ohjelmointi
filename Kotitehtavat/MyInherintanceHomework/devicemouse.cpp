#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{
    // cout << "DeviceMouse constructor" << endl;
}

void DeviceMouse::setPrimaryButton()
{
    cout << "Enter primary button value: ";
    cin >> primaryButton;
    if (primaryButton == 1) {
        cout << "Left mouse button is primary" << endl;
    } else if (primaryButton == 2) {
        cout << "Right mouse button is primary" << endl;
    } else {
        cout << "Invalid input for primary button" << endl;
    }
}

short DeviceMouse::getrPrimaryButton()
{
    return primaryButton;
}
