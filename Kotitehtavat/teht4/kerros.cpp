#include "kerros.h"


Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);

}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus1 = as1.laskeKulutus(hinta);
    double kulutus2 = as2.laskeKulutus(hinta);
    double kulutus3 = as3.laskeKulutus(hinta);
    double kulutus4 = as4.laskeKulutus(hinta);

    double kokonaisKulutus2 = kulutus1 + kulutus2 + kulutus3 + kulutus4;

    cout << "Katutason kulutus, kun hinta = 1 on " << kokonaisKulutus2 <<  endl;
    return kokonaisKulutus2;
}
