#ifndef MAA_H
#define MAA_H

#include<iostream>
using namespace std;

class Maa
{
public:
    Maa();
    int getVakiLuku() const;
    void setVakiLuku(int newVakiLuku);

    string getNimi() const;
    void setNimi(const string &newNimi);

private:
    int vakiLuku;
    string nimi;
};

#endif // MAA_H
