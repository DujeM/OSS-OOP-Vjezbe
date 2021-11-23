#include <iostream>
#include "PointPosition.cpp"

using namespace std;



int main()
{
	PointPosition point;
	PointPosition secondPoint;

	point.setRandomPosition(10, 20);
	secondPoint.setRandomPosition(10, 20);

	cout << "Distance in 2D space: " << point.distanceToAnother2dPoint(secondPoint.getX(), secondPoint.getY()) << endl;
	cout << "Distance in 3D space: " << point.distanceToAnother3dPoint(secondPoint.getX(), secondPoint.getY(), secondPoint.getZ()) << endl;
}