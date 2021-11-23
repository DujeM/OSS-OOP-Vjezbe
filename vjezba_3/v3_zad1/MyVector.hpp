#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

struct MyVector
{
	vector<int> elements;

	void input_vector_ref(int n, vector<int> &elementsRef);
	void input_vector(vector<int> &elementsRef, int min, int max);
	void print_vector();
	void create_mixed_vector(vector<int> &firstVector, vector<int> &secondVector);
	void sort_vector();
	void remove_element(int ele);
};

