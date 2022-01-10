#include "Counter.h";
#include "Tarantula.h";
#include "Zohar.h";
#include "Vrabac.h";

using namespace std;

int main() {
	Tarantula t;
	Zohar z;
	Vrabac v;
	Counter c;

	c.addAnAnimal(&t);
	c.addAnAnimal(&z);
	c.addAnAnimal(&v);
	c.getNumOfLegs();
}