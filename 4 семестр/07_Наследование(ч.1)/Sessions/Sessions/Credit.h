#pragma once
#include "Student.h"

class Credit: public Student
{
public:
	int kr;
	char *subject;
	bool credit = false;

	Credit();
	Credit(char *_fio, char *_date, char *_sub, int _kr);

	~Credit();
	bool showCredit();
	virtual void print();
};

