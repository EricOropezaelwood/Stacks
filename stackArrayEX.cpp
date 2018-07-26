#include <iostream>

using namespace std;

class StackArray
{

	public:
		StackArray();
		void push(int x);
		void pop();
		int peek();
		bool isEmpty();
		bool isFull();

	private:
		int top;
		const int SIZE = 5;
		int stack[SIZE];
}

StackArray::StackArray()
{
	top = -1;
}

void StackArray::push(int x)
{
	if (! isFull())
	{
		top++;
		stack[top] = x;
	}
}

void StackArray::pop()
{
	if(! isEmpty())
	{
		top--;
	}
}

int StackArray::peek()
{
	if (! isEmpty())
	{
		return stack[top];
	}
	// if stack IS empty
	return -1;
}

bool StackArray::isEmpty()
{
	// return top == NULL; ???
}

int main()
{
	

	return 0;
}