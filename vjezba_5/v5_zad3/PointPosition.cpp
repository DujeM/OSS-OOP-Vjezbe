#include "PointPosition.h";	
#include <iostream>
#include <random>

using namespace std;

void PointPosition::setPosition(double xVal, double yVal, double zVal)
{
	if (xVal != 0)
	{
		x = xVal;
	}

	if (yVal != 0)
	{
		y = yVal;
	}

	if (zVal != 0)
	{
		z = zVal;
	}
}

void PointPosition::setRandomPosition(int min, int max)
{
	uniform_real_distribution<double> unif(min, max);
	default_random_engine re;
	x = unif(re);
	y = unif(re);
	z = unif(re);
}

double PointPosition::getX() {
	return x;
}

double PointPosition::getY() {
	return y;
}

double PointPosition::getZ() {
	return z;
}

double PointPosition::distanceToAnother2dPoint(double x2, double y2)
{
	double distance;
	return distance = sqrt(x * x2 + y * y2);
}

double PointPosition::distanceToAnother3dPoint(double x2, double y2, double z2)
{
	double distance;
	return distance = hypot(hypot(x - x2, y - y2), z - z2);
}
