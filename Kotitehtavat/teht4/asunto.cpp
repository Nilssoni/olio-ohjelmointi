#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    hinta = asukasMaara * neliot;
//    cout << "Asunnon kulutus, kun hinta = 1 on " << hinta <<  endl;
    return hinta;
}
