#include <iostream>
#include "Spider.h"
#include <string>

using namespace std;

class Tarantula : public Spider
{
public:
	virtual string getType() {
		return "Tarantula";
	}
};