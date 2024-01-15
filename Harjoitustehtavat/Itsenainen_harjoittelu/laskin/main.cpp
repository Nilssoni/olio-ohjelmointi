#include <iostream>

using namespace std;
void doubleNumbers1(int, int);
void doubleNumbers2(int *, int *);


int main()
{
    int x = 5, y = 9;
    cout << "aluksi mainissa x=" << x << endl;
    cout << "aluksi mainissa y=" << y << endl;

    doubleNumbers1(x,y);

    cout << "aluksi mainissa x=" << x << endl;
    cout << "aluksi mainissa y=" << y << endl;

    doubleNumbers2(&x, &y);

    return 0;
}

void doubleNumbers1(int x, int y){
    x = x * 2;
    y = y * 2;
    cout << "funktiossa (1) x=" << x << endl;
    cout << "funktiossa (1) y=" << y << endl;
}

void doubleNumbers2(int *x, int*y){
    *x = *x * 2;
    *y = *y * 2;
    cout << "funktiossa (2) x=" << x << endl;
    cout << "funktiossa (2) y=" << y << endl;
}
