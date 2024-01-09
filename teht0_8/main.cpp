#include <iostream>
#include <cstdlib>

using namespace std;
void sarja(int sluku);

int main() {
    int sluku;
    cin >> sluku;

    srand(sluku);


    sarja(sluku);

    return 0;
}

void sarja(int sluku) {
    for(int i = 0; i < 5; i++){
        int satunnaisluku = rand() % 20;
        cout << satunnaisluku << endl;
    }
}
