#include "stdafx.h"
#include "Counter.h"
#include "iostream"
using namespace std;

Counter::Counter()
{
	count = 0;
}

Counter::Counter(int _count)
{
	count = _count;
}


Counter::~Counter()
{
}

Counter Counter::operator++(int) {
	return Counter(this->count++);
}


void Counter::show() {
	cout << "Значение счетчика: " << count << endl;
}