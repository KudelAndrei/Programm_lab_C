// Matriks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n;

	cout << "������� ������ ���������� �������: ";
	cin >> n;

	Matrix matr;

	matr.set(n);
	matr.show(n);
	matr.norma(n);

	system("pause");
	return 0;
}

