// Sessions.cpp: ���������� ����� ����� ��� ����������� ����������.
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


	Credit kudelOOP("������� ������ �������������", "23.06.2017", "����������������", 8);
	Credit kudelAngl("������� ������ �������������", "25.20.2017", "����������� ����", 6);
	Credit pavelOOP("��������� ����� ����������", "23.06.2017", "����������������", 3);
	Credit pavelAngl("��������� ����� ����������", "25.20.2017", "���������� ����", 8);

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

