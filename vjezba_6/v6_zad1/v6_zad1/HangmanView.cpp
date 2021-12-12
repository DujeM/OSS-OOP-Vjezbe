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
		cout << "    |    " << endl;
		cout << "    |    " << endl;
		cout << "    |    " << endl;
		cout << "_________" << endl;
	case 6:
		cout << "    -----" << endl;
		cout << "    |    " << endl;
		cout << "    |    " << endl;
		cout << "    |    " << endl;
		cout << "_________" << endl;
	case 5:
		cout << "    ---------" << endl;
		cout << "    |       |" << endl;
		cout << "    |    " << endl;
		cout << "    |    " << endl;
		cout << "_________" << endl;
	case 4:
		cout << "    ---------" << endl;
		cout << "    |       |" << endl;
		cout << "    |       O" << endl;
		cout << "    |    " << endl;
		cout << "_________" << endl;
	case 3:
		cout << "    ---------" << endl;
		cout << "    |       |" << endl;
		cout << "    |       O" << endl;
		cout << "    |       |" << endl;
		cout << "_________" << endl;
	case 2:
		cout << "    ---------" << endl;
		cout << "    |       |" << endl;
		cout << "    |       O" << endl;
		cout << "    |      |||" << endl;
		cout << "_________" << endl;
	case 1:
		cout << "    ---------" << endl;
		cout << "    |       |" << endl;
		cout << "    |       O" << endl;
		cout << "    |      |||" << endl;
		cout << "    |       |" << endl;
		cout << "_________" << endl;
	case 0:
		cout << "Game over!" << endl;
	default:
		break;
	}
}
