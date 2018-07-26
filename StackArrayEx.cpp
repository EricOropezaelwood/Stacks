#include <iostream>
using namespace std;

class StackArray
{
  public:
	StackArray();
	void push(int x);
	void pop();
	int peek();
	
  private:
	int top;
	const int SIZE = 5;
	int stack[SIZE];
};

StackArray::StackArray()
{
	top = -1;
	for (int i=0; i<SIZE; i++)
		stack[i] = 0;
}

void StackArray::push(int x)
{
	if (top+1 == SIZE)
	{
		cout << "Stack full, cannot push" << endl;
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

void StackArray::pop()
{
	top--;
}

int StackArray::peek()
{
	if ( top >= 0)
		return stack[top];
	else
		return -1;
}


int main()
{
	i8
	return 0;
}
