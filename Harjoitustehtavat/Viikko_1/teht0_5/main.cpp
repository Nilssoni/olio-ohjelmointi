#include <iostream>

using namespace std;
void kertoma(int num);

int main()
{
    int num;
    cin >> num;
    kertoma(num);
    return 0;
}

void kertoma(int num){
    long tulos = 1;

    if(num > 10){
        cout << "Luku on liian iso" << endl;
    }
    else if(num <= 1){
        cout << "Ei voida laskea" << endl;
    }
    else{
        for(int i = 1; i <= num; i++){
            tulos *= i;
        }
        cout << tulos << endl;
    }
}
