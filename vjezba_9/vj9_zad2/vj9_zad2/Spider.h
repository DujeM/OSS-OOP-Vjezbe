#include <iostream>
#include <string>

using namespace std;

class Spider : public IAnimal
{
public:
	virtual string getType() {
		return "Spider";
	}

	virtual int getLegNum() {
		return 8;
	}
};