#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    myParentMemberVariable = 10;
    cout << "MyParentClass muodostinfunktio" << endl;
}

MyParentClass::~MyParentClass()
{
    cout << "MyParentClass tuhoajafunktio" << endl;
}

void MyParentClass::myParentMemberFunction()
{
    cout << "MyParentClass luokan jasenfunktio myParentMemberFunction()" << endl;
    cout << "myParentMemberVariable jasenmuuttujan arvo= " << myParentMemberVariable << endl;
}
