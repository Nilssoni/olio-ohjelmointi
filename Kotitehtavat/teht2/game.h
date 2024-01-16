#ifndef GAME_H
#define GAME_H

#include <iostream>

class Game
{
    public:
        Game();
        ~Game();
        void play();
        int getPlayerGuess() const;
        int getMaxNumber() const;
        void setMaxNumber(int newMaxNumber);

    private:
        int maxNumber;
        int playerGuess;
        int randomNumber;
        int numOfGuesses;
        void printGameResult();

};

#endif // GAME_H
