#include "stdafx.h"
#include "Student.h"
#include "iostream"
using namespace std;

Student::Student()
{
	char *fio = "���� ������ ��������";
	char *date = "23.06.2017";
}

Student::Student(char *_fio, char *_date)
{
	char *fio = _fio;
	char *date = _date;
}


Student::~Student()
{
}

void Student::print() {
	cout << "��� ��������: " << fio << endl;
	cout << "���� �������: " << date << endl;
}
