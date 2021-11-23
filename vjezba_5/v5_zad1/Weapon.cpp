#include "PointPosition.cpp";	
#include "Weapon.h";	
#include <iostream>
using namespace std;


int Weapon::getTotal() {
	return totalNumOfBullets;
}

int Weapon::getCurrent() {
	return currentNumOfBullets;
}

void Weapon::setWeaponPosition()
{
	weaponPosition.setRandomPosition(10, 20);
}

void Weapon::setTotal(int t)
{
	totalNumOfBullets = t;
}

void Weapon::setCurrent(int c)
{
	currentNumOfBullets = c;
}

void Weapon::shoot_weapon()
{
	shotFired.setRandomPosition(10, 20);

	setCurrent(getCurrent() - 1);
}

PointPosition Weapon::getShotFired() {
	return shotFired;
}

void Weapon::reload_weapon()
{
	setCurrent(getTotal());
}
