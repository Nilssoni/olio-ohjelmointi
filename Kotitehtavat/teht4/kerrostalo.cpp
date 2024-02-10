#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo()
{
<<<<<<< HEAD
    cout << "Kerros luotu" << endl;
}

Kerrostalo::~Kerrostalo()
{
    cout << "Kerros destruktori" << endl;
=======
    cout << "Kerrostalo luotu" << endl;
>>>>>>> 60fb072e65844cb64f6ce609d5085949be7a053d
}

double Kerrostalo::laskeKulutus(double hinta)
{
<<<<<<< HEAD
    double kulutus1 = Eka.laskeKulutus(hinta);
    double kulutus2 = Toka.laskeKulutus(hinta);
    double kulutus3 = Kolmas.laskeKulutus(hinta);

    double kokonaisKulutus3 = kulutus1 + kulutus2 + kulutus3;

    cout << "Kerrostalon kulutus, kun hinta = 1 on " << kokonaisKulutus3 <<  endl;
    return kokonaisKulutus3;
=======
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    int kokonaiskulutus = eka.laskeKulutus(1) + toka.laskeKulutus(1) + kolmas.laskeKulutus(1);
    return kokonaiskulutus;
>>>>>>> 60fb072e65844cb64f6ce609d5085949be7a053d
}


