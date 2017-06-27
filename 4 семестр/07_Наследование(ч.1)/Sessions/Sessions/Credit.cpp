#include "stdafx.h"
#include "Credit.h"
#include "iostream"
using namespace std;

Credit::Credit()
{
	subject = "Программирование";
	kr = 10;
}

Credit::Credit(char *_fio, char *_date, char *_sub, int _kr) {
	fio = _fio;
	date = _date;
	subject = _sub;
	kr = _kr;
};

Credit::~Credit()
{
}

bool Credit::showCredit() {
	if (kr >= 4)
		return credit = true;
	else
		return credit = false;
}

void Credit::print() {
	cout << "********* Зачет **********" << endl;
	cout << "ФИО: " << fio << endl;
	cout << "Дата: " << date << endl;
	cout << "Предмет: " << subject << endl;
	cout << "Оценка по предмету: " << kr << endl;
	cout << "Зачтено: " << showCredit() << endl;
	cout << "***************************" << endl << endl;
}

