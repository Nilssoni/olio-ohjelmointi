#include <iostream>
#include "chef.h"
#include"italianchef.h"

using namespace std;

int main()
{
    Chef cook("Jyrki");
    ItalianChef cook2("Mario");

    cook.makeSalad();
    cook2.makePasta();
    cook.makeSoup();
//    ItalianChef cook2("Valimaki");
//    cook2.makePasta();
    return 0;
}
