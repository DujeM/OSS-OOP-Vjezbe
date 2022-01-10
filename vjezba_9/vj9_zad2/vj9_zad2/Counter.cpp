#include <iostream>
#include "Counter.h"
#include <string>

using namespace std;

void Counter::addAnAnimal(IAnimal* animal) {
	totalNumOfLegs += animal->getLegNum();
	cout << "Dodan: " << animal->getType() << endl;
}

void Counter::getNumOfLegs() {
	cout << "Ukupno nogu: " << totalNumOfLegs << endl;
}
