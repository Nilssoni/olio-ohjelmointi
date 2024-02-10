#include <iostream>

#include "myfirstclass.h"

using namespace std;

int main()
{
    MyFirstClass objectMyFirstClass;
    objectMyFirstClass.myFirstMemberFunction();
    objectMyFirstClass.mySecondMemberFunction();
    objectMyFirstClass.myThirdMemberFunction(2);
    objectMyFirstClass.myFourthMemberFunction(0);
    short returnValue;
    return 0;
}
// tämän rivin jälkeen olio objectMyFirstClass tuhoutuu pinomuistista
// automaattisesti käyttöjärjestelmän toimesta.
