// MetodGausa.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "iostream"
#include <math.h>
#include "Sle.h"
#include "Inverse.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	
	Sle matr1;
	Inverse matr2;

	/*matr1.set();
	matr1.showMatr();

	matr1.metodGaus();*/

	matr2.set();
	matr2.showMatr();
	matr2.inverseMatr();


	system("pause");
    return 0;
}

