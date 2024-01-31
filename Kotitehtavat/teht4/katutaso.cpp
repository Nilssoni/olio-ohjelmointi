#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    cout << "Asunnon kulutus, kun hinta = 1 on " << hinta <<  endl;
    return hinta;
}
