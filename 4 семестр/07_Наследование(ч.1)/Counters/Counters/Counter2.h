#pragma once
#include "Counter.h"

class Counter2: public Counter
{
public:

	Counter2();
	Counter2(int _count);
	~Counter2();

	Counter2 operator--(int);
};

