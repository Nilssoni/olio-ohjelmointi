#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H

#include <iostream> // tarvitaan, koska tulostusolio cout on määritelty tässä kirjastossa
using namespace std; // tarvitaan, koska koko C++:n standardikirjasto on std-nimiavaruuden sisällä

class MyFirstClass
{
public:
    void myFirstMemberFunction();
    void mySecondMemberFunction();
    short myThirdMemberFunction(short parameterOne);
    void myFourthMemberFunction(short parameterOne);

private:
    short myFirstMemberVariable;
    short numberOne,numberTwo;

};

#endif // MYFIRSTCLASS_H
