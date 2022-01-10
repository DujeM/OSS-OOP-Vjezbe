#include <iostream>

using namespace std;

class Player
{
private:
	int currentNumber = 0;
	int score = 0;
public:
	virtual void getIsComputer() = 0;
	void setCurrentNumber(int num);
	int getCurrentNumber();
	void setScore();
	int getScore();
};