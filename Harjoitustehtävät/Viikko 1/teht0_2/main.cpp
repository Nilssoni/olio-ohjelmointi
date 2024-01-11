#include <iostream>

using namespace std;
void tarkista(int num);


int main()
{
    int num=27;
    tarkista(num);
    return 0;
}

void tarkista(int num) {
    if (num > 0){
        cout<<"positiivinen"<<endl;
    }
    else if (num < 0){
        cout<<"negatiivinen"<<endl;
    }
    else {
        cout<<"nolla"<<endl;
    }
}
