#include "stdafx.h"
#include "Matrix.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

Matrix::Matrix()
{
}

Matrix::Matrix(const Matrix &obj)
{
}


Matrix::~Matrix()
{
}

void Matrix::show(int N){

	for (int count_row = 0; count_row < N; count_row++)
	{
		for (int count_column = 0; count_column < N; count_column++)
			cout << setw(4) << setprecision(N) << matr[count_row][count_column] << "   ";
		cout << endl;
	}

	 //удаление двумерного динамического массива
	 for (int i = 0; i < N; i++)
		delete[]matr[i];

}

void Matrix::set(int N){
	 
	for (int i = 0; i < N; i++) // и на N столбцов
		matr[i] = new int[N];

	// заполнение массива
	for (int count_row = 0; count_row < N; count_row++)
		for (int count_column = 0; count_column < N; count_column++)
			matr[count_row][count_column] = (rand() % 10 + 1) / int((rand() % 10 + 1)); //заполнение массива случайными числами с масштабированием от 1 до 10
}

void Matrix::norma(int  N){

	int max_row = 0;
	int max_colum = 0;
	float norm = 0;
	int norm_m = 0;

	for (int count_row = 0; count_row < N; count_row++)
	{
		int temp = 0;	
		for (int count_column = 0; count_column < N; count_column++)
			temp += (int)fabs((float)matr[count_row][count_column]);
		if (temp > norm_m)
			norm_m = temp;
	}
	cout << "Норма: " << norm_m << endl;


	for (int count_row = 0; count_row < N; count_row++)
	{
		for (int count_column = 0; count_column < N; count_column++)
			norm += sqrt(pow(matr[count_row][count_column], 2));
		cout << endl;
	}
	cout << "Евклидова норма: " << (int)norm << endl;


}