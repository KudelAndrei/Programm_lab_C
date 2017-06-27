#include "stdafx.h"
#include "iostream"
#include "random"
#include <ctime>
#include "Sle.h"
using namespace std;


Sle::Sle()
{
	srand((unsigned)time(NULL));
	n = 2;
	m = 3;

	matrix = new float *[n];

	for (int i = 0; i < n; i++)
		matrix[i] = new float[m];

	for (int i = 0; i<n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = rand() % 10 + 1;
}

Sle::Sle(int _n, int _m)
{
	srand((unsigned)time(NULL));
	n = _n;
	m = _m;
	m++;

	matrix = new float *[n];

	for (int i = 0; i<n; i++)
		matrix[i] = new float[m];

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			matrix[i][j] = rand() % 10 + 1;
}

Sle::~Sle()
{
}

void Sle::set()
{
	srand((unsigned)time(NULL));
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество неизвестных: ";
	cin >> m;
	m++;

	matrix = new float *[n];

	for (int i = 0; i < n; i++)
		matrix[i] = new float[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = rand() % 10;

}

void Sle::showMatr() {
	cout << "Полученная матрица" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	cout << endl << endl;
}

void Sle::metodGaus() {
	xx = new float[m];

	try
	{
		for (int i = 0; i < n; i++)
		{
			tmp = matrix[i][i];
			for (int j = n; j >= i; j--)
			{
				if (tmp == 0)
					throw "Матрица не имеет решения!" ;
				matrix[i][j] /= tmp;
			}
			for (int j = i + 1; j<n; j++)
			{
				tmp = matrix[j][i];
				for (int k = n; k >= i; k--)
					matrix[j][k] -= tmp*matrix[i][k];
			}
		}

		xx[n - 1] = matrix[n - 1][n];
		for (int i = n - 2; i >= 0; i--)
		{
			xx[i] = matrix[i][n];
			for (int j = i + 1; j < n; j++) xx[i] -= matrix[i][j] * xx[j];
		}

		cout << "Решение методом Гауса: " << endl;
		for (int i = 0; i < n; i++)
			cout << "X" << i + 1 << " = " << xx[i] << ";" << endl;
		cout << endl << endl;

	}
	catch (char *str)
	{
		cout << str << endl;
	}

}