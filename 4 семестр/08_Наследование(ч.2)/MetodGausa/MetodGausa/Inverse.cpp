#include "stdafx.h"
#include "Inverse.h"
#include "iostream"
using namespace std;


Inverse::Inverse()
{
}


Inverse::~Inverse()
{
}

void Inverse::inverseMatr() {

	if (n == m - 1) {
		if (determ() != 0) {
			transp();
			cout << "Work;" << endl;
		}
		else {
			cout << "Ранг матрицы = 0" << endl;
		}
	} 
	else {
		cout << "Только для квадратных матриц!" << endl;
	};
	
}

float Inverse::determ()
{
	float det = 0;

	if (n == 1)
	{
		det = matrix[0][0];
	}
	else if (n == 2)
	{
		det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	}
	else
	{
		det = matrix[0][0] * matrix[1][1] * matrix[2][2] - matrix[0][0] * matrix[1][2] * matrix[2][1]
			- matrix[0][1] * matrix[1][0] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0]
			+ matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[0][2] * matrix[1][1] * matrix[2][0];

		delete[] matrix;
	}
	return det;
}

float** Inverse::transp() {
	t = new float *[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m - 1; j++)
			t[i][j] = matrix[j][i];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = 1/determ() * t[i][j];

	return matrix;
}

void Inverse::showTransp() {
	cout << "Обратная матрица :" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
	cout << endl;
}


