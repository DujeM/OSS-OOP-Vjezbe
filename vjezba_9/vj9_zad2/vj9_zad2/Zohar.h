#include <iostream>
#include "Insect.h"
#include <string>

using namespace std;

class Zohar : public Insect
{
public:
	virtual string getType() {
		return "Zohar";
	}
};