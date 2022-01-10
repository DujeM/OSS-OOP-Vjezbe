#include <iostream>
#include <string>

using namespace std;

class Insect : public IAnimal
{
public:
	virtual string getType() {
		return "Insect";
	}

	virtual int getLegNum() {
		return 6;
	}
};