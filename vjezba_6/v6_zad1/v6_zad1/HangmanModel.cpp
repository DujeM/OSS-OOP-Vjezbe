#include <iostream>
#include <string>
#include "HangmanModel.h"

using namespace std;


void HangmanModel::setMovie(string m)
{
	movie = m;
}

string HangmanModel::getMovie()
{
	return movie;
}

void HangmanModel::setInput(string input)
{
	currentInput = input;
}

string HangmanModel::getInput()
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