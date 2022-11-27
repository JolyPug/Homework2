#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(void)

{

	last = 0; count = 0;

}
Stack::~Stack(void)

{

}
void Stack::Put(Element* e)

{

	if (e == 0) return;

	e->prev = last;

	if (count < 1)

	{

		last = e;

	}

	last = e; count++;

	cout << "Element " << e->value << "added to stack" << endl;

}
Element* Stack::Get()

{

	Element* e;

	if (last == 0) return 0;


	e = last;

	last = last->prev;
	cout << "Element " << e->value << "removed from stack" << endl; return e;

}
void Stack::Print()

{

	if (count < 1)

	{
		cout << "Stack is empty";
		return;

	}

	Element* e; e = last;

	while (e != 0)

	{

		cout << e->value << ", "; e = e->prev;

	}

	cout << endl;

}
int Stack::Result()
{
	if (count < 1)
	{
		return 0;
	}
	Element* e;
	e = last;

	int result = 1;
	while (e != 0)
	{
		result *= e->value;
		e = e->prev;
	}

	return result;
}
