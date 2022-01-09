#include <iostream>
#include "Timer.h"

using namespace std;

Timer::Timer(int hours, int minutes, double seconds) {
	h = hours;
	m = minutes;
	s = seconds;
}

void Timer::operator+=(const Timer& t) {
	h += t.h;
	m += t.m;
	s += t.s;
}

void Timer::operator/=(int t) {
	h /= t;
	m /= t;
	s /= t;
}

ostream& operator<<(ostream& os, const Timer& t) {
	os << t.h << ':' << t.m << ':' << t.s;
	return os;
}

bool Timer::operator<(Timer& t) {
	return (t.h < h || t.m < m || t.s < s);
}

Timer& Timer::operator-(Timer& t) {
	h -= t.h;
	m -= t.m;
	s -= t.s;
	return *this;
}

Timer::operator double() {
	return (h * 3600 + m * 60 + s);
}