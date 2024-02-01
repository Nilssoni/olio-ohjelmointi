#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

#include <iostream>
using namespace std;

int main()
{
    Asunto asuntoObj;
    asuntoObj.maarita(2, 100);
    asuntoObj.laskeKulutus(1);

    Katutaso katutasoObj;
    katutasoObj.as1.maarita(2,100);
    katutasoObj.as2.maarita(2,100);
    katutasoObj.maaritaAsunnot();
    double kokonaisKulutus = katutasoObj.laskeKulutus(1);

    Kerros kerrosObj;
    kerrosObj.maaritaAsunnot();
    double kokonaisKulutus2 = kerrosObj.laskeKulutus(1);

    Kerrostalo kerrostaloObj;
    return 0;
}
