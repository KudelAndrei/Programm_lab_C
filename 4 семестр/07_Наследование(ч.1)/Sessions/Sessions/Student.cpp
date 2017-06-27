#include "stdafx.h"
#include "Student.h"
#include "iostream"
using namespace std;

Student::Student()
{
	char *fio = "Петр Петров Петрович";
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
	cout << "ФИО студента: " << fio << endl;
	cout << "Дата события: " << date << endl;
}
