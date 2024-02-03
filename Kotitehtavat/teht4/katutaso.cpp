#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    int kokonaiskulutus = as1.laskeKulutus(1) + as2.laskeKulutus(1);
    return kokonaiskulutus;
}
