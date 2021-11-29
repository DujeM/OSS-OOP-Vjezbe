#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include "HangmanModel.h"
#include <fstream>
#include <time.h>

using namespace std;


void HangmanModel::setMovie(string m)
{
	srand(time(NULL));
	vector<string> line(37);

	ifstream file("movie.txt");

	if (file.is_open())
	{
		for (int i = 0; i < 17; i++)
		{
			getline(file, line[i]);
		}
	}

	file.close();
	movie = line[rand() % 17];
}

string HangmanModel::getMovie()
{
	return movie;
}

void HangmanModel::setInput(string input)
{
	currentInput = input;
}

string& HangmanModel::getInput()
{
	return currentInput;
}
int HangmanModel::getLives()
{
	return lives;
}

void HangmanModel::setLives()
{
	lives--;
}

vector<char> HangmanModel::getCheckedLetters()
{
	return checkedLetters;
}

void HangmanModel::setCheckedLetters(char l)
{
	checkedLetters.push_back(l);
}

bool HangmanModel::getProgress()
{
	return inProgress;
}

void HangmanModel::setProgress(bool p)
{
	inProgress = p;
}