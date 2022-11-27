#pragma once
#include "Element.h"

class Stack
{
public:
	Element* last;
	int count;

	Stack(void);
	~Stack(void);
	void Put(Element* e); Element* Get();
	void Print();
	int Result();
};
