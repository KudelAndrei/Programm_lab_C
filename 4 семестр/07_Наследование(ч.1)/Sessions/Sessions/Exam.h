#pragma once
#include "Student.h"
#include "Credit.h"

class Exam: public Student
{
	int value;
	int krExam;
	char *subject;
	bool creditExam;

	int result;

public:

	Exam();
	Exam(Credit _credit, char *_date, int value );
	~Exam();
	bool trueCredit();
	virtual void print();
};

