#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
  public:
	int data;
	node* next;
};

class StackLL
{
  public:
	StackLL();
	void push(int element);
	void pop();
	void print();
	
  private:
	node *top;
	int count; 
};

StackLL::StackLL()
{	
	top = NULL;
	count = 0;
}

void StackLL::push(int element)
{
	node *newNode = new node;
	newNode->data = element;
	newNode->next = top;
	count++;
	top = newNode;	
}

void StackLL::pop()
{
	if (top == NULL)		// stack empty
	{
		cout << "stack is empty, cannot pop." << endl;
	}
	else
	{
		node * delNode = top;
		top = top->next;
		delete delNode;
		count--;
	}
}

void StackLL::print()
{
	node *tmp;
	tmp = top;
	while(tmp != NULL)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

int main()
{
	StackLL *sl = new StackLL();
	sl->push(1);
	sl->push(2);
	sl->push(3);
	sl->push(4);
	sl->print();
	sl->pop();
	sl->print();
	return 0;
}
