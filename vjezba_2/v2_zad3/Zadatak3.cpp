/*
Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
pravokutnik čije su stranice paralelne sa osima apscisa i ordinata. Napisati
funkciju koja prima niz pravokutnika i jednu kruznicu i vraća broj pravokutnika koji sijeku kružnicu. Niz pravokutnika i kružnica šalju se u funkciju
pomoću const referenci.
*/
#include <iostream>
#include <iomanip>

using namespace std;
struct Point
{
	int x;
	int y;
};

struct Circle
{
	float r;
	Point s;

	void createACircle()
	{
		std::cout << "Enter circle center X:" << std::endl;
		std::cin >> s.x;

		std::cout << "Enter circle center Y:" << std::endl;
		std::cin >> s.y;

		std::cout << "Enter circle radius:" << std::endl;
		std::cin >> r;
	}
};

struct Rectangle
{
	Point a;
	Point b;
	int n;
	Point* arrOfRectangles;

	void createArrayOfRectangles()
	{
		std::cout << "Enter number of rectangles:" << std::endl;
		std::cin >> n;

		arrOfRectangles = (Point*)malloc(n * sizeof(Point));

		for (int i = 0; i < n; i++)
		{
			arrOfRectangles[i].x = 1 + rand() % 20;
			arrOfRectangles[i].y = 1 + rand() % 20;
			std::cout << "Rect - " << i << " " << arrOfRectangles[i].x << " " << arrOfRectangles[i].y << std::endl;
		}
	}
};

int doesItIntersect(const Circle* circle, const Point* rect)
{
	if ((sqrt(rect->x - circle->s.x) + sqrt(rect->y - circle->s.y)) == sqrt(circle->r))
		return 1;

	return 0;
}

int numberOfIntersections(const Circle* circle, const Rectangle* rect)
{
	int cnt = 0;

	for (int i = 0; i < rect->n; i++)
	{
		if (doesItIntersect(circle, &rect->arrOfRectangles[i]))
			cnt++;
	}

	return cnt;
}

int main()
{
	Rectangle rectangle;
	Circle circle;
	int numOfIntersections = 0;

	rectangle.createArrayOfRectangles();
	circle.createACircle();

	numOfIntersections = numberOfIntersections(&circle, &rectangle);

	std::cout << "Number of intersections:" << numOfIntersections << std::endl;

	return 0;
}