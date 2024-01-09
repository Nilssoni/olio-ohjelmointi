#include <iostream>

using namespace std;

void terveiset(int num);

int main()
{
    int num = 5;
    terveiset(num);
    return 0;
}

void terveiset(int num) {
    for(int x = 1; x <= num; x++){
        cout<< "Terve " << x << endl;
    }
}
