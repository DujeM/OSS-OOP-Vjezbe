#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HangmanView
{
public:
	void displayCurrentProgress(string currentInput);
	void displayUsedLetters(vector<char> usedLetters);
	void displayHangman(int lives);
};