#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta();

private:
    int jauhot;
    int vesi;
};

#endif // ITALIANCHEF_H
