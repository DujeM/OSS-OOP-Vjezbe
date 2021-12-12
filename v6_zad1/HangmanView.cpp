#include <iostream>
#include <string>
#include <vector>
#include "HangmanView.h"

using namespace std;


void HangmanView::displayCurrentProgress(string currentInput)
{
	cout << "Current progress: " << currentInput << endl;
}

void HangmanView::displayUsedLetters(vector<char> usedLetters)
{
	cout << "Used letters: ";
	for (int i = 0; i < usedLetters.size(); i++)
	{
		cout << usedLetters[i] << ", ";
	}
	cout << endl;
}

void HangmanView::displayHangman(int lives)
{
	switch (lives)
	{
	case 8:
		break;
	case 7:
		cout << "    |    ";
		cout << "    |    ";
		cout << "    |    ";
		cout << "_________";
	case 6:
		cout << "    -----";
		cout << "    |    ";
		cout << "    |    ";
		cout << "    |    ";
		cout << "_________";
	case 5:
		cout << "    ---------";
		cout << "    |       |";
		cout << "    |    ";
		cout << "    |    ";
		cout << "_________";
	case 4:
		cout << "    ---------";
		cout << "    |       |";
		cout << "    |       O";
		cout << "    |    ";
		cout << "_________";
	case 3:
		cout << "    ---------";
		cout << "    |       |";
		cout << "    |       O";
		cout << "    |       |";
		cout << "_________";
	case 2:
		cout << "    ---------";
		cout << "    |       |";
		cout << "    |       O";
		cout << "    |      |||";
		cout << "_________";
	case 1:
		cout << "    ---------";
		cout << "    |       |";
		cout << "    |       O";
		cout << "    |      |||";
		cout << "    |       |";
		cout << "_________";
	case 0:
		cout << "Game over!";
	default:
		break;
	}
}
