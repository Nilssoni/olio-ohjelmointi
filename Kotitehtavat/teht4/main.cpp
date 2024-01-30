#include "asunto.h"
#include "katutaso.h"

#include <iostream>

using namespace std;

int main()
{
    Asunto tiedot;
    tiedot.maarita(2, 100);
    tiedot.laskeKulutus(0);
    Katutaso();
    Kerros();
    return 0;
}
