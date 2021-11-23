#include <iostream>
#include <iomanip>
using namespace std;
#include <iostream>
#include <iomanip>
using namespace std;

void isMinOrMax(int *min, int *max, int num)
{
	if (num > *max)
	{
		*max = num;
	}

	if (num < *min)
	{
		*min = num;
	}
}

int findMinMaxRecursive(int* arr, int size, int index, int min, int max)
{
	if (size == index)
	{
		std::cout << "Recursive solution: " << std::endl;
		std::cout << "MIN: " << min << std::endl;
		std::cout << "MAX: " << max << std::endl;

		return 0;
	}

	isMinOrMax(&min, &max, arr[index]);

	index++;

	return findMinMaxRecursive(arr, size, index, min, max);
}

int main()
{
	int arr[] = { 3, 4, 12, 5, -2, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);

	findMinMaxRecursive(arr, size, 0, arr[0], arr[0]);
}