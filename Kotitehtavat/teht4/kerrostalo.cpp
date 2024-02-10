#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerros luotu" << endl;
}

Kerrostalo::~Kerrostalo()
{
    cout << "Kerros destruktori" << endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus1 = Eka.laskeKulutus(hinta);
    double kulutus2 = Toka.laskeKulutus(hinta);
    double kulutus3 = Kolmas.laskeKulutus(hinta);

    double kokonaisKulutus3 = kulutus1 + kulutus2 + kulutus3;

    cout << "Kerrostalon kulutus, kun hinta = 1 on " << kokonaisKulutus3 <<  endl;
    return kokonaisKulutus3;
}
