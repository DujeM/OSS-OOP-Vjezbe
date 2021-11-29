#include <iostream>
#include <string>

using namespace std;

class HangmanController
{
	public:
		char userEntry();
		void checkLetter(string movie, string currentInput, char input);
		void updateLives();
		int checkIfGameIsOver(int lives);
};