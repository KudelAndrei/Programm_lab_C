#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string fio;
	string nameBook;
	string nameGroup;
	int year;
	int value;

public:
	Book();
	~Book();

	string get_fio();
	string get_nameBook();
	string get_nameGroup();
	int get_year();
	void show();
	void set();
	void showBook();
	void showAuthor(Book spis[], int n);    // ������ ���� ��������� ������
	void showNameGroup(Book spis[], int n); // ������ ����, ���������� ������ �������������
	void showYear(Book spis[], int n);      // ������ ����, ���������� ����� ��������� ����

};

