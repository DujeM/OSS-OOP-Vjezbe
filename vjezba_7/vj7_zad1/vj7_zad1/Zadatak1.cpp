#include "Board.h"
#include "Point.h"
using namespace std;

int main()
{
	Point p1(2, 2), p2(8,8), p3(2,8), p4(16,8);
	Board b(20, 10, 'o');

	b.draw_line(p1, p2, 'x');
	b.draw_line(p3, p4, 'x');

	b.display();
}
