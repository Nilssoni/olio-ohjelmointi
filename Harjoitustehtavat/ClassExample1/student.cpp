#include "student.h"

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

void Student::studentInfo()
{
    cout << "Etunimeni on " << fname << " sukunimeni on " << lname << endl;
}

Student::Student()
{
    cout << "Student luokan (Constructor) kutsuttiin!" << endl;
}

Student::~Student()
{
    cout << "Student luokan (Destructor) kutsuttiin!" << endl;
}
