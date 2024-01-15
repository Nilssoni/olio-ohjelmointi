#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
private:
    string fname;
    string lname;
public:
    Student();
    string getFname() const;
    void setFname(const string &newFname);
    string getLname() const;
    void setLname(const string &newLname);
    void studentInfo();
};

#endif // STUDENT_H
