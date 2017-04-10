#pragma once
#include <iostream>

using namespace std;

class Matrix
{
private:
	int N;

public:
	int **matr = new int*[N];
	Matrix();
	Matrix(const Matrix &obj);
	~Matrix();

	void set(int N);
	void show(int N);
	void norma(int N);
};

