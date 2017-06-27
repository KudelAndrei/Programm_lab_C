// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "A.h"
#include "B.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	A p1(1);
	B p2(2);

	p1.receive();
	p2.receive();

	p2.put(3, 4);
	p2.receive();

	system("pause");
    return 0;
}

