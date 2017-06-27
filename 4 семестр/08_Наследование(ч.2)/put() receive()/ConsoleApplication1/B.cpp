#include "stdafx.h"
#include "B.h"
#include "iostream"
using namespace std;

B::B()
{
	c2 = 0;
}

B::B(int _c2)
{
	c2 = _c2;
}

B::~B()
{
}

void B::put(int put, int put2) {
	c1 = put;
	c2 = put2;
}

void B::receive() {
	cout << "Значение с1 = " << c1 << endl;
	cout << "Значение с2 = " << c2 << endl;
	cout << endl;
}