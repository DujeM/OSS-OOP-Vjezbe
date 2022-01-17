#include <iostream>
#include "TemplateStack.h"
using namespace std;

int main() {
	TemplateStack<int> stackOfInts;

	stackOfInts.push(111);
	stackOfInts.push(222);
	stackOfInts.push(333);


	cout << "Removed last element in stack: " << stackOfInts.pop() << endl;
	cout << "Removed last element in stack: " << stackOfInts.pop() << endl;
	cout << "Removed last element in stack: " << stackOfInts.pop() << endl;

	if (stackOfInts.isEmpty()) {
		cout << "Stack is empty!" << endl;
	}

	stackOfInts.push(444);

	if (stackOfInts.isEmpty() == 0) {
		cout << "Stack is not empty!" << endl;
	}

	return 0;
}

