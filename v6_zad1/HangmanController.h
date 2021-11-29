#include <iostream>
#include <string>

using namespace std;

class HangmanController
{
	public:
		char userEntry();
		bool checkLetter(string movie, string& currentInput, char input);
		void updateLives();
		bool checkIfGameIsOver(int lives);
};