#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    eka = nullptr;
    delete toka;
    toka = nullptr;
    delete kolmas;
    kolmas = nullptr;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
    int kokonaiskulutus = eka->laskeKulutus(1) + toka->laskeKulutus(1) + kolmas->laskeKulutus(1);
    return kokonaiskulutus;
}


