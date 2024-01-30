#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot();
    void maarita(int a, int b);
    double laskeKulutus(double);
    Asunto as1;
    Asunto as2;

};

#endif // KATUTASO_H
