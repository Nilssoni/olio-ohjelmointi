#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string s, int a, int b):Chef(s)
{
    name = s;
    jauhot = a;
    vesi = b;
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
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}
