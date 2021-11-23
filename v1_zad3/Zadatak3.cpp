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

int findMinMax(int* arr, int size)
{
	int min = arr[0], max = arr[0];
	for (int i = 0; i < size; i++)
	{
		isMinOrMax(&min, &max, arr[i]);
	}

	std::cout << "MIN: " << min << std::endl;
	std::cout << "MAX: " << max << std::endl;

	return 0;
}

int main()
{
	int arr[] = { 3, 4, 12, 5, -2, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);

	findMinMax(arr, size);
}