#include <string>

using namespace std;

template <class StackType> class TemplateStack {
private:
	int top;
	StackType stack[10];
public:
	TemplateStack();
	void push(StackType k);
	StackType pop();
	bool isEmpty();
};

template <class StackType> TemplateStack<StackType>::TemplateStack() {
	top = -1; 
}

template <class StackType> void TemplateStack<StackType>::push(StackType k)
{
	top = top + 1;
	stack[top] = k;
}

template <class StackType> bool TemplateStack<StackType>::isEmpty()
{
	return top == -1 ? 1 : 0;
}

template <class StackType> StackType TemplateStack<StackType>::pop()
{
	StackType lastElement = stack[top];
	top--;

	return lastElement;
}