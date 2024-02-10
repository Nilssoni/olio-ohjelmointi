#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    // cout << "MyDeviceUI constructor" << endl;
}

MyDeviceUI::~MyDeviceUI()
{
    // cout << "MyDeviceUI destructor" << endl;
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;
    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    int choice;

    do{
        cout << "DEVICE MENU" << endl;
        cout << "==================" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Device Information" << endl;
        cout << "5: Finish" << endl;
        cout << endl;
        cout << "Choose: ";
        cin >> choice;


        switch (choice) {
        case 1:
            cout << "SET MOUSE INFORMATION" << endl;
            cout << "=====================" << endl;
            objectDeviceMouse->setDeviceID();
            uiSetMouseInformation();
            break;
        case 2:
            cout << "SET TOUCH PAD INFORMATION" << endl;
            cout << "=========================" << endl;
            objectDeviceTouchPad->setDeviceID();
            uiSetTouchPadInformation();
            break;
        case 3:
            cout << "SET DISPLAY INFORMATION" << endl;
            cout << "=======================" << endl;
            objectDeviceDisplay->setDeviceID();
            uiSetDisplayInformation();
            break;
        case 4:
            cout << "SHOW DEVICE INFORMATION" << endl;
            cout << "=======================" << endl;
            uiShowDeviceInformation();
            break;
        case 5:
            cout << "FINISH" << endl;
            cout << "======" << endl;
            break;
        default:
            cout << "INVALID INPUT" << endl;
            cout << "=============" << endl;
            break;
        }
    }
    while (choice != 5);
}

void MyDeviceUI::uiSetMouseInformation()
{
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() {
    cout << "DEVICE INFORMATION" << endl;
    cout << "===================" << endl;

    cout << "Mouse Information:" << endl;
    objectDeviceMouse->getDeviceID();
    cout << "Primary Button: " << objectDeviceMouse->getrPrimaryButton() << endl;
    cout << endl;

    cout << "Touch Pad Information:" << endl;
    objectDeviceTouchPad->getDeviceID();
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << endl;

    cout << "Display Information:" << endl;
    objectDeviceDisplay->getDeviceID();
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl;
}
