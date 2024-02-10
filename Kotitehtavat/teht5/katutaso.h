#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include "kerros.h"


class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);
    Asunto *as1 = new Asunto;
    Asunto *as2 = new Asunto;

};

#endif // KATUTASO_H
