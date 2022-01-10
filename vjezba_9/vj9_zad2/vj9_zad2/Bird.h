#include <iostream>
#include <string>

using namespace std;

class Bird : public IAnimal
{
public:
	virtual string getType() {
		return "Bird";
	}

	virtual int getLegNum() {
		return 2;
	}
};