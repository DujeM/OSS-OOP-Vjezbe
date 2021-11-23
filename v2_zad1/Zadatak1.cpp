#include <iostream>
#include <iomanip>
using namespace std;

int findMinMax(int* arr, int size, int* minRef, int* maxRef)
{
	int min = arr[0], max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxRef = &arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
			minRef = &arr[i];
		}
	}

	return 0;
}

int main()
{
	int arr[] = { 3, 4, 12, 5, -2, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* minRef = (int*)malloc(sizeof(int));
	int* maxRef = (int*)malloc(sizeof(int));;

	findMinMax(arr, size, minRef, maxRef);

	std::cout << "MIN " << minRef << std::endl;
	std::cout << "MAX " << maxRef << std::endl;
}