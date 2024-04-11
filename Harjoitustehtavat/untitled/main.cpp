#include <iostream>

int pointteritJaReferenssit(int *a, int &b) {
    // Palauta pointterin ja referenssin välityksellä saadut luvut yhteenlaskettuna
    return (*a) + b;
}

int main() {
    int luku1 = 1;
    int luku2 = 2;
    int *ptr = &luku1;
    int &ref = luku2;

    // Kutsu funktiota ja tulosta tulos
    std::cout << pointteritJaReferenssit(ptr, ref) << std::endl;

    return 0;
}
