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
	cout << "Current progress: ";
	for (int i = 0; i < usedLetters.size(); i++)
	{
		cout << usedLetters[i] << " ";
	}
	cout << endl;
}

void HangmanView::displayHangman(int lives)
{
	
}
