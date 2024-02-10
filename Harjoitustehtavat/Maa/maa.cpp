#include "maa.h"

Maa::Maa()
{

}

int Maa::getVakiLuku() const
{
    return vakiLuku;
}

void Maa::setVakiLuku(int newVakiLuku)
{
    vakiLuku = newVakiLuku;
}

string Maa::getNimi() const
{
    return nimi;
}

void Maa::setNimi(const string &newNimi)
{
    nimi = newNimi;
}
