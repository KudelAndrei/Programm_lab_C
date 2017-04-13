#pragma once
class Matrix
{
	int size;
	int **atr;

public:
	Matrix(); // конструктор по умолчанию
	Matrix(int n); // конструктор с параметрами
	Matrix(Matrix &copy); // конструктор копирования
	~Matrix();

	void setMatrix(int size); // рандомная установка значений матрицы
	void showMatrix(int size); // вывод матрицы
	int getSize() const; // возвратить количество элементов матрицы

	Matrix operator+ (const Matrix &right); // перегруженая операция сложения

};

