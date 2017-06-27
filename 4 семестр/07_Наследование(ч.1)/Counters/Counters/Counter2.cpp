#include "stdafx.h"
#include "Counter2.h"


Counter2::Counter2()
{
	count = 0;
}

Counter2::Counter2(int _counter)
{
	count = _counter;
}

Counter2::~Counter2()
{
}

Counter2 Counter2::operator--(int) {
	return Counter2(this->count--);
}
