// Abiturient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abiturient.h"
#include <cstdlib>


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian"); //русский язык

	Abiturient student;

	student.get_Abiturient();

	system("pause"); // задержка экрана консоли
	return 0;
}
