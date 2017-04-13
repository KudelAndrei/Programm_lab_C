#pragma once
class Matrix
{
	int size;
	int **atr;

public:
	Matrix(); // ����������� �� ���������
	Matrix(int n); // ����������� � �����������
	Matrix(Matrix &copy); // ����������� �����������
	~Matrix();

	void setMatrix(int size); // ��������� ��������� �������� �������
	void showMatrix(int size); // ����� �������
	int getSize() const; // ���������� ���������� ��������� �������

	Matrix operator+ (const Matrix &right); // ������������ �������� ��������
	Matrix operator- (const Matrix &right); // ������������ �������� ���������
	Matrix operator* (const Matrix &right); // ���������� �������� ����������
	Matrix operator= (const Matrix &right); // ���������� �������� ������������

};

