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
		bool isEmpty();
		void push(int element);
		void pop();
		void print();
	private:
		node *top;
};

StackLL::StackLL()
{
	top = NULL;
}

bool StackLL::isEmpty()
{
	return top == NULL;
}

void StackLL::push(int element)
{
	node *newNode = new node;
	newNode -> data = element;
	newNode -> next = top;
	top = newNode;
}

void StackLL::pop()
{
	if (! isEmpty())
	{
		node *tmp = top;
		top = top -> next;
		delete tmp;
	}

}

void StackLL::print()
{
	node *tmp = top;
	while (tmp != NULL)
	{
		cout << tmp -> data << " ";
		tmp = tmp -> next;
	}
	cout << endl;
}


int main()
{

	StackLL *sl = new StackLL();
	sl -> push(1);
	sl -> push(2);
	sl -> push(3);
	sl -> push(4);
	sl -> print();
	sl -> pop();
	sl -> print();	
    
    return 0;
}