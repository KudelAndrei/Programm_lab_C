#include "stdafx.h"
#include "Array.h"
#include <iostream>
using namespace std;

#include <iomanip> // ��� ������������ setw

#include <cstdlib>

Array::Array() // ����������� �� ���������, ��� ����������
{
	size = 10; // �� ��������� ������ ������� = 10 ���������
	ptr = new int[size]; // �������� ����� � ������ ��� �������
	for (int ix = 0; ix < size; ix++) // �������� ������
		ptr[ix] = 0;
}

Array::Array(int arraySize) // ����������� � �����������
{
	// ���� �������� ��������� ������ 0, ��������� size �������� arraySize, ����� - 10
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new int[size]; // �������� ����� � ������ ��� �������

	for (int ix = 0; ix < size; ix++) // �������� ������
		ptr[ix] = 0;
}

Array::Array(const Array &arrayToCopy) // ����������� �����
:size(arrayToCopy.size)              // ������������� ������� �������
{
	ptr = new int[size]; // �������� ����� � ������ ��� �������

	for (int ix = 0; ix < size; ix++)
		ptr[ix] = arrayToCopy.ptr[ix]; // ��������� ������ ���������� ������� arrayToCopy
}

Array::~Array() // ����������� ������ Array
{
	delete[] ptr; // ���������� ������, ������ ������
}

int Array::getSize() const // ���������� ���������� ��������� �������
{
	return size;
}

// ������������� �������� �����, ��� ����� �������� ������� � ����������
//istream &operator>> (istream & input, Array &obj)
//{
//	for (int ix = 0; ix < obj.size; ix++)
//		input >> obj.ptr[ix]; // ��������� ������ ������� obj
//	return input; // ��������� ������������� ����, ���� cin >> x >> y >> z >> ...
//}

// ������������� �������� ������ ��� ������ Array (����� ��������� ������� �� �����)
//ostream &operator<< (ostream &output, const Array &obj)
//{
//	for (int ix = 0; ix < obj.size; ix++)
//	{
//		output << setw(5) // ��� ������ ����� ���������� 5 �������
//			<< obj.ptr[ix];
//	}
//
//	output << std::endl; // ������� ������� �� ����� ������
//
//	return output; // ��������� ������������� �����, ���� cout << x << y << z << ...
//}

void Array::setArray() // ���������� �������
{
	for (int ix = 0; ix < size; ix++)
		cin >> ptr[ix]; // ���� �������� ������� � ����������
}

void Array::getArray() // ����� �������
{
	for (int ix = 0; ix < size; ix++)
		cout << setw(5) << ptr[ix]; // ����� ��������� ������� �� �����

	cout << std::endl; // ����� ������
}

const Array &Array::operator= (const Array &right) // �������� ������������
{
	if (&right != this) // ����� �� ����������� ����������������
	{
		if (size != right.size)
		{
			delete[] ptr; // ���������� ������������
			size = right.size; // ���������� ������ ������ �������
			ptr = new int[size]; // �������� ������ ��� ���������� ������
		}

		for (int ix = 0; ix < size; ix++)
			ptr[ix] = right.ptr[ix]; // ����������� ������
	}

	return *this; // ��������� ������������� ������������, �������� x = t = e
}

bool Array::operator== (const Array &right) const// �������� ���������
{
	if (size != right.size)
		return false; // ������� � ������ ����������� ���������
	for (int ix = 0; ix < size; ix++)
	if (ptr[ix] != right.ptr[ix])
		return false; // ������� �� �����

	return true; // ������� �����
}

int &Array::operator[] (int subscript)
{
	if (subscript < 0 || subscript >= size)
	{
		std::cerr << "\n ������ �������: " << subscript << std::endl;
		exit(1); // ��������� ������ ���������, ������������ ������
	}
	return ptr[subscript]; // ������� ������ �� ������� �������
}

Array Array::operator+ (const Array &right)
{
	if (size != right.size)
	{
		cout << "������� ������� �������!\n";
		exit(1); // ��������� ������ ���������
	}

	Array result(size);
	for (int ix = 0; ix < size; ix++)
		result.ptr[ix] = ptr[ix] + right.ptr[ix];

	return result; // ������� �����
}

Array &Array::operator+= (const int &number) // �������� ���������� �������� � ����� �������
{
	Array result(size);
	result = *this; // �������� �������� ������� ������

	delete[] ptr; // ����������� ������

	size = size + 1; // ����������� ������ ������� �� 1
	ptr = new int[size]; // �������� ������

	for (int ix = 0; ix < (size - 1); ix++)
		ptr[ix] = result.ptr[ix]; // ����������� ������

	ptr[size - 1] = number; // ��������� ����� � ����� �������

	return *this; // ��������� ����� �������������� ���������
}

Array &Array::operator- (const int & key) // �������� �������� �������� �� �����
{
	int counterKey = 0; // ������� ��������� �������� ���������
	// ���������� ���������� ���������, ������� ���������� �������
	for (int ix = 0; ix < size; ix++)
	{
		if (ptr[ix] == key)
			counterKey++;
	}

	Array temp(size);
	temp = *this; // ��������� ������� ������ �� ��������� ������

	delete[] ptr; // j���������� ������
	size = size - counterKey; // �������������� ������

	ptr = new int[size];
	int counter = 0, ix = 0;
	while (counter < size)
	{
		if (temp[counter] != key)
		{
			ptr[ix] = temp.ptr[counter]; // ����������� ������
			ix++;
		}
		counter++;
	}

	return *this;
}

int Array::search(const int key) const // ����� �� �����
{
	for (int ix = 0; ix < size; ix++)
	if (key == ptr[ix]) // ����� �� �����
		return (ix + 1);             // ������� �������� ��������

	return -1;
}

void Array::choicesSort() // ���������� �������
{
	for (int repeat_counter = 0; repeat_counter < size; repeat_counter++)
	{
		int temp = ptr[0]; // ��������� ���������� ��� �������� �������� ������������
		for (int element_counter = repeat_counter + 1; element_counter < size; element_counter++)
		{
			if (ptr[repeat_counter] > ptr[element_counter])
			{
				temp = ptr[repeat_counter];
				ptr[repeat_counter] = ptr[element_counter];
				ptr[element_counter] = temp;
			}
		}
	}
}
