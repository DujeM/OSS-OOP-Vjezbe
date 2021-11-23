#include "PointPosition.cpp";	
#include <iostream>
using namespace std;

class Weapon
{
private:
	int totalNumOfBullets = 0;
	int currentNumOfBullets = 0;
	PointPosition weaponPosition;
	PointPosition shotFired;

public:
	int getTotal();
	int getCurrent();
	void setWeaponPosition();
	void setTotal(int t);
	void setCurrent(int c);
	void shoot_weapon();
	void reload_weapon();
	PointPosition getShotFired();
};