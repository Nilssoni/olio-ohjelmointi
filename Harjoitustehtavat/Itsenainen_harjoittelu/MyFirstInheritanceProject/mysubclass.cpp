#include "mysubclass.h"

MySubClass::MySubClass() : mySubMemberVariable(100)

{
    cout << "MySubClass muodostinfunktio" << endl;
    cout << "mySubMemberVariable jasenmuuttujan arvo="<< mySubMemberVariable << endl;
    myParentMemberVariable = 200;
}

MySubClass::~MySubClass()
{
    cout << "MySubClass tuhoajafunktio" << endl;
}
