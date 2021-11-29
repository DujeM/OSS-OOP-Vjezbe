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

bool HangmanController::checkLetter(string movie, string& currentInput, char input)
{
	vector<int> characterLocations;
	string temp = currentInput;

	for (int i = 0; i < movie.size(); i++)
	{
		if (movie[i] == input)
		{
			currentInput[i] = input;
		}
	}

	return 1;
}

bool HangmanController::checkIfGameIsOver(int lives)
{
	return lives == 0 ? true : false;
}
