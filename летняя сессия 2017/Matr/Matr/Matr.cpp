// Matr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	Matrix matrix, matrix2, matrix3;
	int size;

	cout << "¬ведите размер квадратной матрицы: "; 
	cin >> size; 
	cout << endl;

	matrix.setMatrix(size);
	matrix2.setMatrix(size);

	matrix.showMatrix(size);
	matrix2.showMatrix(size);

	matrix + matrix2;


	system("pause");
	return 0;
}

