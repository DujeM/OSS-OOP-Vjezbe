#include "MyVector.hpp"
using namespace std;

int main()
{
	MyVector mv;
	int n = 0;

	cout << "Enter vector size" << endl;
	std::cin >> n;

	mv.input_vector_ref(n, mv.elements);
	mv.input_vector(mv.elements, 0, 5);

	mv.print_vector();
}
