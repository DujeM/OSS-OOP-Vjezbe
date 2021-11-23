#include <iostream>
#include <iomanip>
using namespace std;

/*
4. Definirati strukturu koja opisuje vektor. Struktura se sastoji od niza int
elemenata, logičke i fizičke veličine niza. Fizička veličina je inicijalno init, a
kada se ta veličina napuni vrijednostima, alocira se duplo.
Napisati funkcije vector_new, vector_delete, vector_push_back, vector_pop_back,
vector_front, vector_back i vector_size. Funkcije su članovi strukture.
*/

struct MyVector
{
	int* elements;
	size_t size, capacity;

	void vector_new(size_t sz)
	{
		size = 0;
		capacity = sz;
		elements = new int[capacity];
	}

	void vector_delete()
	{
		delete[] elements;
	}

	void vector_push_back(int n)
	{
		if (capacity == size) {
			capacity = 2 * capacity;
			vector_resize(capacity);
		}
		size++;
		elements[size] = n;
	}

	void vector_resize(size_t n)
	{
		int* new_data = new int[n];

		for (size_t i = 0; i < size; i++)
		{
			std::cout << elements[i];
			new_data[i] = elements[i];
		}

		delete[] elements;

		elements = new_data;
	}

	void vector_pop_back()
	{
	}

	int& vector_front()
	{
		return elements[1];
	}

	int& vector_back()
	{
		return elements[size - 1];
	}

	size_t vector_size()
	{
		return size;
	}

	void print_vector()
	{
		for (size_t i = 0; i < vector_size(); ++i)
			std::cout << elements[i] << " ";
		std::cout << std::endl;
	}

};

int main()
{
	MyVector mv;
	mv.vector_new(10);

	int m;
	cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "first element " << mv.vector_front() << endl;
	cout << "last element " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "removing last element" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "size " << mv.vector_size() << endl;
	cout << "capacity " << mv.capacity << endl;

	mv.vector_delete();
	return 0;
}
