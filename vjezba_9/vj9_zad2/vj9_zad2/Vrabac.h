#include <iostream>
#include "Bird.h"
#include <string>

using namespace std;

class Vrabac : public Bird
{
public:
	virtual string getType() {
		return "Vrabac";
	}
};