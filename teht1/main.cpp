#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int);
int maxnum;

using namespace std;

int main()
{
    game(maxnum);
    return 0;
}

int game(int maxnum){
    int secret, answer, guesses = 0;
    cout << "Give a number: ";
    cin >> maxnum;
    srand (time(NULL));
    secret = rand() % maxnum + 1;

    do{
        cout << "Guess the number (1 to " << maxnum << "): ";
        cin >> answer;

        if(secret < answer){
            cout << "The secret number is lower" << endl;
            guesses++;
        }
        else if(secret > answer){
            cout << "The secret number is higher" << endl;
            guesses++;
        }
    }

    while(secret != answer);
    guesses++;
    cout << "Congratulations!" << endl << "It took: " << guesses << " attempts" << endl;
    return guesses;
}
