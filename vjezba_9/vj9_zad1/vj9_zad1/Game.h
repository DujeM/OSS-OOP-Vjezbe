#include <iostream>
#include "Player.h"
#include <vector>
using namespace std;

class Game
{
private:
	vector<Player> listOfPlayers;
	int requiredScore = 2;
	int currentTotal = 0;
	bool inProgress = true;
public:
	void addAPlayer();
	void setRequiredScore(int score);
	void playersSetCoins();
	void guessTheNumber();
	void checkIfPlayerReachedRequiredScore(int score, int p);
	void setGameProgress();
	bool GetGameProgress();
};