#include "stdafx.h"
#include "Exam.h"
#include "Credit.h"
#include "iostream"
using namespace std;

Exam::Exam()
{
	value = 0;
	creditExam = " �� �����!";
}

Exam::Exam(Credit _credit, char *_date, int _value)
{
	fio = _credit.fio;
	date = _date;
	subject = _credit.subject;
	creditExam = _credit.showCredit();
	value = _value;
	krExam = _credit.kr;
}


Exam::~Exam()
{
}

bool Exam::trueCredit() {
	if (!creditExam) {
		result = 0;
		value = 0;
		return creditExam = false;
	}
	else {
		result = (value + krExam) / 2;
		return creditExam = true;
	}
}

void Exam::print() {
	cout << "********* ������� **********" << endl;
	cout << "���: " << fio << endl;
	cout << "����: " << date << endl;
	cout << "�������: " << subject << endl;
	cout << "������� � ��������: " << trueCredit() << endl;
	cout << "������ �� �������: " << value << endl;
	cout << "�������� ������: " << result << endl;
	cout << "***************************" << endl << endl;
}
