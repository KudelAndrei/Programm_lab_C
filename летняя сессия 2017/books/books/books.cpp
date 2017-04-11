// books.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

void showAuthor(Book spis[], int n); // ������ ���� ��������� ������
void showNameGroup(Book spis[], int n); // ������ ����, ���������� ������ �������������
void showYear(Book spis[], int n); // ������ ����, ���������� ����� ��������� ����


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");


	// ������ ����
	Book *spis;
	int n;

	cout << "������� ���������� ����: ";
	cin >> n; cout << endl << endl;

	spis = new Book[n];

	// ������ ���� 
	for (int i = 0; i < n; i++){
		spis[i].set();
		cout << endl << endl;
	}

	// ����� ������ ����
	cout << "=================================" << endl;
	cout << "������ ���� ���� � ����������" << endl;
	cout << "=================================" << endl << endl;
	for (int i = 0; i < n; i++){
		spis[i].show();
		cout << "=================================" << endl << endl;
	}

	showAuthor(spis, n);
	showNameGroup(spis, n);
	showYear(spis, n);

	system("pause");
	return 0;
}

void showAuthor(Book spis[], int n){
	string author;
	int col = 0;
	cout << "������� ������: ";
	cin >> author; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ���� " << author << ":" << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_fio() == author){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " � ������� ������ ���� ���� ��� ��� �� ����������! ";
	}
	cout << endl << endl;
};

void showNameGroup(Book spis[], int n){
	string nameGroup;
	int col = 0;

	cout << "������� ������������: ";
	cin >> nameGroup; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ����, ���������� �������� �������������: " << nameGroup << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_nameGroup() == nameGroup){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " � ������� ������������ ���� ���� ��� ��� �� ����������! ";
	}
	cout << endl << endl;
};

void showYear(Book spis[], int n){
	int year;
	int col = 0;
	cout << "������� ���: ";
	cin >> year; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "������ ����, ���������� ����� ��������� ����: " << year << ":" << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_year() > year){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " ����� ��������� ���� �� �������� �� ����� �����! ";
	}
	cout << endl << endl;
};

