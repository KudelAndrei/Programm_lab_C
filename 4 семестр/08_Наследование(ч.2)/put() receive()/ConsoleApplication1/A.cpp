#include "stdafx.h"
#include "A.h"
#include "iostream"
using namespace std;


A::A()
{
	c1 = 0;
}

A::A(int _c1)
{
	c1 = _c1;
}

A::~A()
{
}

void A::put(int put) {
	c1 = put;
}

void A::receive() {
	cout << "Значение атрибута с1 = " << c1 << endl << endl;
}