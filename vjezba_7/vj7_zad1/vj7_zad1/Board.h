#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

class Board
{
private:
	int x = 0;
	int y = 0;
	char** board;
public:
	Board(int x, int y, char border);
	Board(const Board &b);
	~Board();
	void display();
	void setX(int rows);
	void setY(int cols);
	int getX();
	int getY();
	void draw_line(Point p1, Point p2, char ch);
};