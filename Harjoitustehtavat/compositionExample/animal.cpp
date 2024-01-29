#include "animal.h"

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::Animal()
{
    cout<<"Animal luokan muodostin"<<endl;
}

Animal::~Animal()
{
    cout<<"Animal luokan tuhoaja"<<endl;
}
