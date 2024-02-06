#include <iostream>

using namespace std;

class ratas
{
public:
    ratas(string);
    ~ratas();
private:
    string type;
};

class Polkupyora
{
public:
    Polkupyora();
    ~Polkupyora();
private:
    ratas * eturatas;
    ratas * takaratas;
};


ratas::ratas(string s)
{
    cout<<"constructing " << s << endl;
    type = s;
}

ratas::~ratas()
{
    cout<<"destructing " << type << endl;
}


Polkupyora::Polkupyora()
{
    eturatas = new ratas("eturatas");
    takaratas = new ratas("takaratas");
    // lisää tähän eturatas pointterin alustus
    // lisää tähän takaratas pointterin alustus;
}

Polkupyora::~Polkupyora()
{
    delete eturatas;
    delete takaratas;
    // Ja tännekin pitää tulla jotain, jotta pyörän osat tulee tuhottua.
}


int main()
{
    Polkupyora olio;
    return 0;
}
