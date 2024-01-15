#include <iostream>

using namespace std;
void tarkista_jaollisuus(int num);

int main()
{
    int num;
    cin >> num;
    tarkista_jaollisuus(num);
    return 0;
}

void tarkista_jaollisuus(int num) {
    int x;
    x = num % 4;

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
