#include "stdafx.h"
#include <cstdlib>
#include "Matrix.h"
#include "iostream"
using namespace std;

Matrix::Matrix()
{
	size = 100;
	atr = new int*[size];

	for (int i = 0; i < size; i++)
		atr[i] = new int[size];

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			atr[i][j] = 0;
		}
	}
}

Matrix::Matrix(int n)
{
	size = (n > 0 ? n : 5);
	atr = new int*[size];

	for (int i = 0; i < size; i++)
		atr[i] = new int[size];

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			atr[i][j] = 0;
		}
	}
}

//Matrix::Matrix(Matrix &copy)
//	:size(copy.size)
//{
//
//	atr = new int*[size];
//
//	for (int i = 0; i < size; i++)
//		atr[i] = new int[size];
// 
//	for (int i = 0; i < size; i++){
//		for (int j = 0; j < size; j++){
//			atr[i][j] = copy[i][j];
//		}
//	}
//
//}

Matrix::~Matrix()
{
	delete[] atr;
}

int Matrix::getSize() const 
{
	return size;
}


void Matrix::setMatrix(int size){

	for (int i = 0; i < size; i++)
		atr[i] = new int[size];

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			atr[i][j] = rand() % 10 +1;
		}
	}

}

void Matrix::showMatrix(int size){

	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << atr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}

Matrix Matrix::operator + (const Matrix &right)
{

	Matrix result(size);
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
			result.atr[i][j] = atr[i][j] + right.atr[i][j];
	}

	return result; // вернуть сумму
}
