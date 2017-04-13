#include "stdafx.h"
#include "Array.h"
#include "arrays.h"


arrays::arrays()
{
	n = 5;
	ptr = new Array[n]; // выделить место в памяти для матрицы
	for (int i = 0; i < n; i++) // обнуляем матрицу
		for (int j = 0; j < n; j++)
			ptr[i][j] = 0;
}

arrays::arrays(int matrixSize){
	n = (matrixSize > 0 ? matrixSize : 10); // количество строк

	ptr = new Array[n]; // выделить место в памяти для матрицы

	for (int i = 0; i < n; i++) // перераспределяем выделенную память
		ptr[i].setSize(n); // количество столбцов

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < ptr->getSize(); j++)
			ptr[i][j] = 0;
	}
		
}


arrays::~arrays()
{
	delete[] ptr;
}

void arrays::setMatr(int n){

	for (int i = 0; i < n; i++)
	for (int j = 0; j < ptr->getSize(); j++)
		cin >> ptr[i][j];

	/* инициализация массива */
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; i++){
			ptr[i][j] = rand() % 10 + 1;
		}
	}

}

void arrays::showMatr(int n){

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; i++){
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
}

