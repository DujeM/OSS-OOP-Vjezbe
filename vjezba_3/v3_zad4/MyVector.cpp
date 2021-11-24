#include "MyVector.hpp"
#include <algorithm>
using namespace std;

void MyVector::input_vector_ref(int n, vector<int> &elementsRef)
{
	int input = 0;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter vector element:" << endl;
		cin >> input;
		elementsRef.push_back(input);
	}

}

void MyVector::input_vector(vector<int> &elementsRef, int min, int max)
{
	int input = min;

	while (input >= min && input <= max)
	{
		cout << "Enter vector element:" << endl;
		cin >> input;

		if (input >= min && input <= max)
		{
			elementsRef.push_back(input);
		}
	}
}

void MyVector::print_vector()
{
	cout << "Start printing";
	cout << endl;
	for (auto i = elements.begin(); i != elements.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

void MyVector::create_mixed_vector(vector<int> &firstVector, vector<int> &secondVector)
{
	for (auto i = firstVector.begin(); i != firstVector.end(); ++i)
	if (find(secondVector.begin(), secondVector.end(), *i) == secondVector.end())
		elements.push_back(*i);
}

void MyVector::sort_vector()
{
	int count = 0;

	sort(elements.begin(), elements.end());

	elements.insert(elements.begin(), 0);

	for (auto i = elements.begin(); i != elements.end(); ++i)
		count += *i;

	elements.insert(elements.end(), count);
}

void MyVector::remove_element(int ele)
{
	auto it = std::find(elements.begin(), elements.end(), ele);

	if (it != elements.end())
		elements.erase(it);
}

