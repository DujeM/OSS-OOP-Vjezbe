#include <iostream>
#include <string>

using namespace std;

class ComputerPlayer : public Player
{
public:
	bool getIsComputer() {
		return true;
	}
};