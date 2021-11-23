/*
Napisati klasu koja predstavlja oružje. Oružje ima svoj položaj u prostoru (jedna
točka u prostoru), broj metaka koji stanu u jedno punjenje i trenutni broj metaka u
punjenju. Može pucati (shoot) i ponovo se puniti (reload).
*/
#include "PointPosition.cpp"
#include <iostream>
#include "Weapon.cpp"

using namespace std;

int main()
{
	Weapon weapon;

	weapon.setWeaponPosition();
	weapon.setTotal(10);
	weapon.setCurrent(10);
	weapon.shoot_weapon();
}