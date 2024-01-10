#include <iostream>
#include <cstdlib>
#include <ctime>

void random(int secret);

using namespace std;

int main()
{
    int secret;
    srand (time(NULL));
    secret = rand() % 20;
    random(secret);
    return 0;
}

void random(int secret){
    int answer;
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
}
