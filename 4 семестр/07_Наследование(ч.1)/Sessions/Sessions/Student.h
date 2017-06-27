#pragma once
class Student
{
public:
	char *fio;
	char *date;

	Student();
	Student(char *_fio, char *_date);
	~Student();

	virtual void print();
};

