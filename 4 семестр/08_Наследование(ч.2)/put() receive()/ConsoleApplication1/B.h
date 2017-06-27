#pragma once
#include "A.h"

class B: public A
{
	int c2;
public:
	B();
	B(int _c2);
	~B();

	void put(int put, int put2);
	void receive();
};

