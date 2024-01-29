#ifndef PERSON_H
#define PERSON_H
#include "cat.h"

#include <iostream>

using namespace std;

class Person
{
private:
    string fname;
    string lname;
    Cat objectCat1;
public:
    Person();
    Person(string fn, string ln);
    ~Person();
    void setFname(const string &newFname);
    void setLname(const string &newLname);
    void personInfo();
    void setCatData();
};

#endif // PERSON_H
