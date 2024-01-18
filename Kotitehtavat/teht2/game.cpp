#include "game.h"
#include <time.h>

Game::Game(int maxNum)
{
    maxNumber = maxNum;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maxinum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    numOfGuesses = 0;
    srand (time(NULL));
    randomNumber = rand() % maxNumber + 1;

    while (playerGuess != randomNumber) {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }
        else if (playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }
    }

    printGameResult();

}

void Game::printGameResult()
{
    cout << "Your guess is right = " << randomNumber << endl;
    cout << "Your guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}



