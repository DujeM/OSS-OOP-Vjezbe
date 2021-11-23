#include "PointPosition.cpp";	
#include <iostream>
using namespace std;

class Target
{
private:
	PointPosition bottomLeft;
	PointPosition upperRight;
	bool hitState = false;

public:
	void setBottomLeft();
	void setUpperRight();
	PointPosition getBottomLeft();
	PointPosition getUpperRight();
	void setState(bool s);
	bool getState(int s);
};