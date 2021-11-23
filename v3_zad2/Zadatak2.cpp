#include "MyVector.hpp"
using namespace std;

int main()
{
	MyVector mv1, mv2, mv3;
	int vectorSize = 0;

	cout << "Enter vector size" << endl;
	std::cin >> vectorSize;

	mv1.input_vector_ref(vectorSize, mv1.elements);

	mv2.input_vector(mv2.elements, 1, 7);

	mv3.create_mixed_vector(mv1.elements, mv2.elements);
	mv3.print_vector();
}
