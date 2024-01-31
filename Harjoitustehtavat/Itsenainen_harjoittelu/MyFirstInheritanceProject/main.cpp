#include "mysubclass.h"

using namespace std;

int main()
{
    // Alla olevalla rivillä esitellään osoitin objectMySubClass joka on tyyppiä MySubClass ja varataan muistia keosta.
    MySubClass *objectMySubClass = new MySubClass;
    // objectMySubClass->myParentMemberFunction(); // aliluokan olio kutsuu yliluokan jäsenfunktiota. Periytyminen mahdollistaa!
    objectMySubClass->myBaseFunctionOne();
    delete objectMySubClass;
    objectMySubClass = nullptr;

    return 0;
}
