#include "asunto.h"

Asunto::Asunto()
{
<<<<<<< HEAD
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{
    cout << "Asunto destruktori" << endl;
=======
//    cout << "asunto luotu" << endl;
>>>>>>> 60fb072e65844cb64f6ce609d5085949be7a053d
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
