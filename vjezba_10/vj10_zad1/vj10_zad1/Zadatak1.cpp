#include <iostream>
using namespace std;

template <class SortType>
void templateSort(SortType *arr, size_t n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i]>arr[j])
			{
				SortType item;
				item = arr[i];
				arr[i] = arr[j];
				arr[j] = item;
			}
		}
	}
}

int main() {
	char arrayOfChars[10] = { 'b', 'g', 'e', 'f', 'q', 'y', 'z', 'a', 'd', 'g'};

	templateSort(arrayOfChars, 10);

	for (int i = 0; i < 10; i++)
		cout << arrayOfChars[i] << " ";
	cout << endl;

	return 0;
}

