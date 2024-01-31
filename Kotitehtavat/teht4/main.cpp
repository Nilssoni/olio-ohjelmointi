#include "asunto.h"
#include "katutaso.h"

#include <iostream>
using namespace std;

int main()
{
    Asunto asuntoObj;
    asuntoObj.maarita(2, 100);
    asuntoObj.laskeKulutus(0);

    Katutaso katutasoObj;
    katutasoObj.maaritaAsunnot();
    katutasoObj.laskeKulutus(200);

    Kerros kerrosObj;

    return 0;
}
