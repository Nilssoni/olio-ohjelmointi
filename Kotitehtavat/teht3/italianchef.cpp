#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string s):Chef(s)
{
    name = s;
    cout << "Chef " << name << " konstruktori" << endl;

}
ItalianChef::~ItalianChef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta" << endl;
}
