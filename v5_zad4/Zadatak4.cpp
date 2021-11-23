#include "Weapon.cpp"
#include "Target.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	Target target;
	vector<Target> targets;
	Weapon weapon;
	int n = 0;
	int numOfHits = 0;

	weapon.setWeaponPosition();
	weapon.setCurrent(10);
	weapon.setTotal(10);

	cout << "Enter number of targets:" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		target.setBottomLeft();
		target.setUpperRight();
		targets.push_back(target);
	}

	for (auto i = targets.begin(); i != targets.end(); ++i)
	{
		Target temp = *i;

		if (weapon.getCurrent() == 0)
		{
			break;
		}

		weapon.shoot_weapon();

		if (temp.getBottomLeft().getX() < weapon.getShotFired().getX() && weapon.getShotFired().getX() < temp.getUpperRight().getX())
		{
			if (temp.getBottomLeft().getY() < weapon.getShotFired().getY() && weapon.getShotFired().getY() < temp.getUpperRight().getY())
			{
				temp.setState(true);
			}
		}

		*i = temp;
	}

}