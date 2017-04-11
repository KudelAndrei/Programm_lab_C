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
	//void showAuthor(Book spis[], int n);    // ������ ���� ��������� ������
	//void showNameGroup(Book spis[], int n); // ������ ����, ���������� ������ �������������
	//void showYear(Book spis[], int n);      // ������ ����, ���������� ����� ��������� ����

};

void showAuthor(Book spis[], int n){
	string author;
	cout << "������� ������: ";
	cin >> author; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ���� " << author << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_fio() == author){
			spis[i].showBook();
			cout << "��������";
		}
	}
}

