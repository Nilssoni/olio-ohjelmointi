#include "myfirstclass.h"

void MyFirstClass::myFirstMemberFunction()
{
    myFirstMemberVariable = 10;
    cout << "Jasenmuuttujan myFirstMemberVariable arvo = " << myFirstMemberVariable << endl;

}

void MyFirstClass::mySecondMemberFunction()
{
    short numberOne = 5,numberTwo = 2;
    int summa = numberOne + numberTwo;
    int tulo = numberOne * numberTwo;
    float osamaara = numberOne / numberTwo;
    cout << summa << endl;
    cout << tulo << endl;
    cout << osamaara << endl;

}

short MyFirstClass::myThirdMemberFunction(short parameterOne)
{
    short localVariable;
    return localVariable;
}
