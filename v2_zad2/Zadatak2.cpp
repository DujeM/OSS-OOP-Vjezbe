#include <iostream>
#include <iomanip>
using namespace std;

int* returnArrRef(int* arr, int size, int* arrRef)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 3) {
			arrRef = &arr[i];
		}
	}

	return 0;
}

int main()
{
	int arr[] = { 3, 4, 12, 5, -2, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* arrRef;

	returnArrRef(arr, size, arrRef);
	std::cout << "Array ref: " << &arrRef << std::endl;

}