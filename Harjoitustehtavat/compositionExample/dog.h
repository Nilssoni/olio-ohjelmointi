#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public Animal
{
private:
    string race;
    string name;
public:
    dog(string na, string ra, string co);
    void dogInfo();
};

#endif // DOG_H
