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
	void showMatrix(); // вывод матрицы
	int getSize() const; // возвратить количество элементов матрицы
	Matrix Transpose();

	Matrix operator+ (const Matrix &right); // перегруженая операция сложения
	Matrix operator- (const Matrix &right); // перегруженая операция вычитания
	Matrix operator*( const Matrix &right); // перегрузка операции увеличения
	Matrix operator= (const Matrix &right); // перегрузка операции присваивания

};

