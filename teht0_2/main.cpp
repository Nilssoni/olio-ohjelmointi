#include <iostream>

using namespace std;
void tarkista();
int num,x;

int main()
{
    num=x;
    tarkista(int num);

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
