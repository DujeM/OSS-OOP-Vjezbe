#include <iostream>
#include <string>

using namespace std;

class IAnimal
{
public:
	string type;
	int legNum;
	virtual ~IAnimal() {}
	virtual string getType() = 0;
	virtual int getLegNum() = 0;
};