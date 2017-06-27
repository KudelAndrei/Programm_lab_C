// Sessions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Student.h"
#include "Credit.h"
#include "Exam.h"
#include "iostream"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");


	Credit kudelOOP("Куделко Андрей Александрович", "23.06.2017", "Программирование", 8);
	Credit kudelAngl("Куделко Андрей Александрович", "25.20.2017", "Иностранный язык", 6);
	Credit pavelOOP("Мельников Павел Михайлович", "23.06.2017", "Программирование", 3);
	Credit pavelAngl("Мельников Павле Михайлович", "25.20.2017", "Английский язык", 8);

	kudelOOP.print();
	kudelAngl.print();
	pavelOOP.print();
	pavelAngl.print();


	Exam examKudelOop(kudelOOP, "24.06.2017", 10);
	Exam examKudelAngl(kudelAngl, "26.06.2017", 3);
	Exam examPavelOop(pavelOOP, "24.06.2017", 5);
	Exam examPavelAng(pavelAngl, "26.06.2017", 4);

	examKudelOop.print();
	examKudelAngl.print();
	examPavelOop.print();
	examPavelAng.print();

	system("pause");
    return 0;
}

