/*
Napisati klasu koja predstavlja oružje. Oružje ima svoj položaj u prostoru (jedna
točka u prostoru), broj metaka koji stanu u jedno punjenje i trenutni broj metaka u
punjenju. Može pucati (shoot) i ponovo se puniti (reload).
*/
#include "PointPosition.cpp"	
#include "Target.cpp"
#include <iostream>
using namespace std;

int main()
{
	Target target;

	target.setBottomLeft();
	target.setUpperRight();
}