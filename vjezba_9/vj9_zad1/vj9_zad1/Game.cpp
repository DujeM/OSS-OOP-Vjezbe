#include <iostream>
#include "Game.h"

using namespace std;

void Game::addAPlayer() {
	Player *newPlayer = new Player;
	listOfPlayers.push_back(*newPlayer);
}

void Game::setRequiredScore(int score) {
	requiredScore = score;
}

void Game::playersSetCoins() {
	int numOfCoins = 0;
	currentTotal = 0;
	for (auto i = listOfPlayers.begin(); i != listOfPlayers.end(); i++)
	{
		cout << "Player " << distance(listOfPlayers.begin(), i) << " set number of coins:" << endl;
		cin >> numOfCoins;
		currentTotal += numOfCoins;
		i->setCurrentNumber(numOfCoins);
	}
}

void Game::guessTheNumber() {
	int guessedNumber;
	for (auto i = listOfPlayers.begin(); i != listOfPlayers.end(); i++)
	{
		cout << "Player " << distance(listOfPlayers.begin(), i) << " guess the number of coins:" << endl;
		cin >> guessedNumber;
		
		if (currentTotal == guessedNumber) {
			cout << "Player " << distance(listOfPlayers.begin(), i) << " guessed the number of coins correctly!" << endl;
			i->setScore();
			checkIfPlayerReachedRequiredScore(i->getScore(), distance(listOfPlayers.begin(), i));
			return;
		}
	}
}

void Game::checkIfPlayerReachedRequiredScore(int score, int p) { 
	if (score == requiredScore) {
		cout << "Player " << p << " reached required score and won the game!" << endl;
		setGameProgress();
	}
}

void Game::setGameProgress() {
	inProgress = false;
}

bool Game::GetGameProgress() {
	return inProgress;
}


