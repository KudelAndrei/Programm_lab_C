// Counters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Counter.h"
#include "Counter2.h"
#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Counter a(1);
	Counter2 b(0);

	a.show();
	a++;
	a++;
	a.show();

	b.show();
	b--;
	b.show();

	system("pause");
    return 0;
}

