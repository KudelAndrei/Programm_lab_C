#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

//void showAuthor(Book spis[], int n){
//	string author;
//	cout << "������� ������: ";
//	cin >> author; cout << endl << endl;
//
//	cout << "=================================" << endl;
//	cout << "������ ���� " << author << ":" << endl;
//	cout << "=================================" << endl;
//	for (int i = 0; i < n; i++){
//		if (spis[i].get_fio() == author){
//			spis[i].showBook();
//			cout << "��������";
//		}
//	}
//}

void showNameGroup(Book spis[], int n){
	string nameGroup;
	cout << "������� ������������: ";
	cin >> nameGroup; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ����, ���������� �������� �������������: " << nameGroup << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_nameGroup() == nameGroup){
			spis[i].showBook();
			cout << "��������";
		}
	}
}

void showYear(Book spis[], int n){
	int year;
	cout << "������� ���: ";
	cin >> year; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ����, ���������� ����� ��������� ����: " << year << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_year() > year){
			spis[i].showBook();
			cout << "��������";
		}
	}
	cout << endl << endl;
}