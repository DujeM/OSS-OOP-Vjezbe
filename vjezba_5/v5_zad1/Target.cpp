#include "PointPosition.cpp";	
#include "Target.h";
#include <iostream>;
using namespace std;


void Target::setBottomLeft()
{
	bottomLeft.setRandomPosition(10, 20);
}

void Target::setUpperRight()
{
	upperRight.setRandomPosition(10, 20);
}

PointPosition Target::getBottomLeft()
{
	return bottomLeft;
}

PointPosition Target::getUpperRight()
{
	return upperRight;
}

void Target::setState(bool s)
{
	hitState = s;
}

bool Target::getState(int s)
{
	return hitState;
}

