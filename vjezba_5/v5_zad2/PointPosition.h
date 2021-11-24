#include <iostream>

using namespace std;

class PointPosition
{
private:
	double x = 0;
	double y = 0;
	double z = 0;

public:
	void setPosition(double xVal, double yVal, double zVal);
	void setRandomPosition(int min, int max);
	double getX();
	double getY();
	double getZ();
	double distanceToAnother2dPoint(double x2, double y2);
	double distanceToAnother3dPoint(double x2, double y2, double z2);
};