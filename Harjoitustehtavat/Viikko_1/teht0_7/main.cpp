#include <iostream>

using namespace std;
void tarkista_jaollisuus(int jaettava,int jakaja);

int main()
{
    int jaettava, jakaja;
    cin >> jaettava;
    cin >> jakaja;
    tarkista_jaollisuus(jaettava, jakaja);
    return 0;
}

void tarkista_jaollisuus(int jaettava,int jakaja) {
    int x;
    x = jaettava % jakaja;

    if(x > 0){
        cout << "ei jaollinen" << endl;
    }
    else if(x < 0){
        cout << "ei jaollinen" << endl;
    }
    else{
        cout << "jaollinen" << endl;
    }
}
