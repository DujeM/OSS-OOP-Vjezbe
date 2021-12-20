#include <iostream>
#include <string>

using namespace std;

class Timer
{
private:
	int h = 0;
	int m = 0;
	double s = 0;
public:
	Timer(int hours, int minutes, double seconds);
	void operator+=(const Timer& t);
	void operator/=(int t);
	friend ostream& operator<<(ostream& os, const Timer& t);
	bool operator<(Timer& t);
	Timer& operator-(Timer& t);
	operator double();
};