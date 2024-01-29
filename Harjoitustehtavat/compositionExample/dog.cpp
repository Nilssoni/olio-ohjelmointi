#include "dog.h"

dog::dog(string na, string ra, string co)
{
    name = na;
    race = ra;
    color = co;
}

voi dog::dogInfo()
{
    cout<<"***********************"<<endl;
    //jos color on private
    //cout<<"private: Nimeni on "<<name<<" olen "<<getColor()<<endl;
    //jos color on protected tai public
    cout<<"protected: Nimeni on "<<name<<" olen "<<color<<endl;
    cout << "rotuni on: " << race << endl;
    cout<<"***********************"<<endl;
}
