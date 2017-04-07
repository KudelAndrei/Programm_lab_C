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

	string get_fio(){
		return fio;
	}

	string get_nameBook(){
		return nameBook;
	}

	string get_nameGroup(){
		return nameGroup;
	}

	int get_year(){
		return year;
	}

	void show(){
		cout << "�����: " << fio << endl;
		cout << "�������� �����: " << nameBook << endl;
		cout << "������������: " << nameGroup << endl;
		cout << "���: " << year << endl;
		cout << "�������: " << value << endl;
	}

	void set(){
		cout << "�����: "; cin >> fio; cout << endl;
		cout << "�������� �����: "; cin >> nameBook; cout << endl;
		cout << "������������: "; cin >> nameGroup; cout << endl;
		cout << "���: "; cin >> year; cout << endl;
		cout << "�������: "; cin >> value; cout << endl ;
	}

	void showAuthor(Book spis[], int n){
		string author;
		cout << "������� ������: ";
		cin >> author; cout << endl << endl;

		cout << "=================================" << endl;
		cout << "������ ���� " << author << ":" << endl;
		cout << "=================================" << endl;
		for (int i = 0; i < n; i++){
			if (spis[i].get_fio() == author){
				spis[i].get_nameBook();
				cout << "��������";
			}
		}
	}

};

