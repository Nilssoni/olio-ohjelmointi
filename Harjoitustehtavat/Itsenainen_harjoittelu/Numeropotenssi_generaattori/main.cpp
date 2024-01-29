#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define R1() rand()%10+1
#define R2() rand()%10+1
#define R3() rand()%10+1

int main() {
    srand(time(0));
    for(int i = 0; i<2; i++){
        cout << R1() << "x" << "^" << R2() << " " << R3() << endl;
    }
    return 0;
}
