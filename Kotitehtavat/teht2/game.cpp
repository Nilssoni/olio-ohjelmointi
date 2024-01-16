#include "game.h"

Game::Game()
{

}

void Game::play()
{

}

int Game::getPlayerGuess() const
{

}

int Game::getMaxNumber() const
{

}

void Game::setMaxNumber(int newMaxNumber)
{

}

void Game::setPlayerGuess(int newPlayerGuess)
{
    playerGuess = newPlayerGuess;
}

int Game::getRandomNumber() const
{
    return randomNumber;
}

void Game::setRandomNumber(int newRandomNumber)
{
    randomNumber = newRandomNumber;
}

int Game::getNumOfGuesses() const
{
    return numOfGuesses;
}

void Game::setNumOfGuesses(int newNumOfGuesses)
{
    numOfGuesses = newNumOfGuesses;
}

void Game::printGameResult()
{

}
