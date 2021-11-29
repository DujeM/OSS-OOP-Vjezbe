#include <iostream>
#include <string>
#include <vector>
#include "HangmanController.h"

using namespace std;


char HangmanController::userEntry()
{
	char input;

	cout << "Enter a letter:" << endl;
	cin >> input;

	return input;
}

void HangmanController::checkLetter(string movie, string currentInput, char input)
{
	vector<int> characterLocations;

	for (int i = 0; i < movie.size(); i++)
	{
		if (movie[i] == input)
		{
			currentInput[i] = input;
		}
	}
}

void HangmanController::updateLives()
{

}

int HangmanController::checkIfGameIsOver(int lives)
{
	return 0;
}
