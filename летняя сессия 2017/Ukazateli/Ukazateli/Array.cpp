#include "stdafx.h"
#include <ctime>
#include <iomanip>
#include <iostream>
#include "Array.h"

using namespace std;


Array::Array()
{
	n = 5;
	ptr = new int[n]; // выделить место в пам€ти дл€ массива
	for (int i = 0; i < n; i++) // обнул€ем массив
		ptr[i] = 0;
}

Array::Array(int size)
{
	n = (size > 0 ? size : 5);

	ptr = new int[n];
	for (int i = 0; i < n; i++) 
		ptr[i] = 0;
}

Array::~Array()
{
	delete[] ptr;
}

void Array::setArray(){
	for (int i = 0; i < n; i++)
		ptr[i] = rand() % 10 + 1;
}

void Array::getArray(){
	for (int i = 0; i < n; i++)
		cout << ptr[i] << " ";
}

void Array::setSize(int n){
	this->n = n;
}

int Array::getSize() const{
	return n;
}