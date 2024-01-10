#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secret, answer;

    srand (time(NULL));
    secret = rand() % 20;

    do{
        cout << "Guess the number (1 to 20): ";
        cin >> answer;

        if(secret < answer){
            cout << "The secret number is lower" << endl;
        }
        else if(secret > answer){
            cout << "The secret number is higher" << endl;
        }
    }
    while(secret != answer);
    cout << "Congratulations!" << endl;

    return 0;
}
