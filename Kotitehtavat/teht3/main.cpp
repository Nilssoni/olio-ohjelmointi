#include <iostream>
#include "chef.h"
#include"italianchef.h"

using namespace std;

int main()
{
//    Chef cook("Jyrki");
    ItalianChef cook2("Mario", 250, 100);

//    cook.makeSalad();
    cook2.makePasta();
//    cook2.makeSoup();

//    ItalianChef cook2("Valimaki");
//    cook2.makePasta();
    return 0;
}
