// Matr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

void qrt(Matrix arr[], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	Matrix matrix, matrix2, matrix3;
	int size;

	cout << "������� ������ ���������� �������: "; 
	cin >> size; 
	cout << endl;

	matrix.setMatrix(size);
	matrix2.setMatrix(size);

	matrix.showMatrix(size);
	matrix2.showMatrix(size);

	cout << endl;

	/* ������ ������ */

	int n, _size;
	Matrix *array;

	cout << "������� ���������� ������: ";
	cin >> n;
	cout << endl;

	cout << "������� ������ ���������� ������: ";
	cin >> _size;
	cout << endl;

	array = new Matrix[n];

	for (int i = 0; i < n; i++){
		array[i].setMatrix(_size);
	}

	cout << "������ ������ ��: " << endl;
	for (int i = 0; i < n; i++){
		array[i].showMatrix(_size);
	}

	qrt(array, _size);

	system("pause");
	return 0;
}

void qrt(Matrix arr[], int n){

	int j;
	cout << "������� i-� �������: ";
	cin >> j;
	cout << endl;

	cout << "������" << endl;
	for (int i = 0; i < n; i++){
		if (i == j){
			(arr[i] * arr[i]).showMatrix(n);
		}
		else arr[i].showMatrix(n);
		cout << endl;
	}
};

