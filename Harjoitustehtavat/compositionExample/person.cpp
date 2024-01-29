#include "person.h"

void Person::setFname(const string &newFname)
{
    fname = newFname;
}

void Person::setLname(const string &newLname)
{
    lname = newLname;
}

void Person::personInfo()
{
    cout << endl;
    cout << "INFO ****************--------------****************" << endl;
    cout << "Nimeni on " << fname << " " << lname << endl;
    cout << "Kissani tiedot : " << endl;
    objectCat1.catInfo();
    cout << "****************--------------****************" << endl;
    cout << endl;
}

void Person::setCatData()
{
    objectCat1.setName("Karvinen");
    objectCat1.setColor("Oranssi");
}

Person::Person()
{

}

Person::Person(string fn, string ln)
{
    fname = fn;
    lname = ln;

}

Person::~Person()
{
    cout << "Person-luokan tuhoaja" << endl;
}
