#include <iostream>
#include <string>

using namespace std;

class HumanPlayer : public Player
{
public:
	bool getIsComputer() {
		return false;
	}
};