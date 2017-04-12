// Matriks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Matrix.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	Matrix myMatrix1(5, 5); // ����������� � �����������

	// ���������� �������
	for (int ix = 0; ix < myMatrix1.getSize(); ix++)
	for (int jx = 0; jx < myMatrix1.getPtr()->getSize(); jx++)
		myMatrix1[ix][jx] = rand() % 100;

	cout << myMatrix1;  // ������������� �������� ������

	Matrix myMatrix2(myMatrix1); // ����������� �����

	myMatrix2.getMatrix(); // ����� ������� � ������� ������ ������ Matrix

	//myMatrix2.setMatrix(); // ���������� ������� � ������� ������ ������ Matrix

	int * adr = myMatrix2.search(99);

	if (adr == NULL)
		cout << "�������� " << 99 << " � ������� ���!\n";
	else
		cout << "�������� " << 99 << " ��������� � ������ �� ������: " << adr << endl;

	cout << (myMatrix1 + myMatrix2); // ������������� �������� ��������

	cout << "��� ������, myMatrix1 �������� ��� ���������!\n";
	cout << myMatrix1;

	myMatrix1 += myMatrix2; // ������������� �������� ��������-����������

	cout << "myMatrix1 �������� �������� ,���������� ���: myMatrix1 += myMatrix2; !\n";
	cout << myMatrix1;

	cout << (myMatrix1 - myMatrix1); // ������������� �������� ���������

	Matrix myMatrix3 = myMatrix2; // ������������� �������� ������������

	cout << myMatrix3;

	if (myMatrix3 == myMatrix2)
		cout << "������� myMatrix3 � myMatrix2 �����!\n";


	system("pause");
	return 0;
}

