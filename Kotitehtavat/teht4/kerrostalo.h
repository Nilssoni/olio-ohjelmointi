#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>

using namespace std;

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);
private:
   Katutaso Eka;
   Kerros Toka;
   Kerros Kolmas;

};

#endif // KERROSTALO_H
