#include <iostream>
#include "IAnimal.h"
#include <string>

using namespace std;

class Counter
{
private:
	int totalNumOfLegs = 0;
public:
	void addAnAnimal(IAnimal* animal);
	void getNumOfLegs();
};