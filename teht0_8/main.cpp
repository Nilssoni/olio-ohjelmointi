#include <iostream>
#include <cstdlib>

using namespace std;
void sarja(int sluku);

int main() {
    int sluku;
    cin >> sluku;
    sarja(sluku);

    return 0;
}

void sarja(int sluku) {
    srand(sluku);
    int satunnaisluku;
    for(int i = 0; i < 5; i++){
        satunnaisluku = rand() % 20;
        cout << satunnaisluku << endl;
    }
}
