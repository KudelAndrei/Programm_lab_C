// Ukazateli.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "arrays.h"
#include "Array.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	setlocale(LC_ALL, "Russian");

	arrays mas;
	Array ar(10);

	ar.setArray();
	ar.getArray();

	/*int n;

	cout << "¬ведите размер массива "; cin >> n;
	cout << endl;

	mas.set(n);
	mas.show(n);
	mas.delMatrix(n);*/


	system("pause");
	return 0;
}

