#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    cout << "Katutaso destruktori" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus1 = as1.laskeKulutus(hinta);
    double kulutus2 = as2.laskeKulutus(hinta);

    double kokonaisKulutus = kulutus1 + kulutus2;

//    cout << "Katutason kulutus, kun hinta = 1 on " << kokonaisKulutus <<  endl;
    return kokonaisKulutus;
}
