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
	int N;
	Matrix *matr;

	cout << "¬ведите размер двумерного массива: ";
	cin >> n;

	cout << "¬ведите массива объектов: ";
	cin >> N;

	matr = new Matrix[N];

	for (int i = 0; i < N; i++){
		matr[i].set(N);
	}

	system("pause");
	return 0;
}

