#include "MyVector.hpp"
using namespace std;

int main()
{
	MyVector mv1;
	int vectorSize = 0;

	cout << "Enter vector size" << endl;
	std::cin >> vectorSize;

	mv1.input_vector_ref(vectorSize, mv1.elements);
	mv1.print_vector();

	mv1.remove_element(5);
	mv1.print_vector();
}
