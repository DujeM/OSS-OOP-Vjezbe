#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HangmanModel
{
private:
	string movie;
	string currentInput;
	int lives = 10;
	vector<char> checkedLetters;
	bool inProgress;

public:
	void setMovie(string m);
	string getMovie();
	void setInput(string input);
	string& getInput();
	int getLives();
	void setLives();
	vector<char> getCheckedLetters();
	void setCheckedLetters(char l);
	bool getProgress();
	void setProgress(bool p);
};