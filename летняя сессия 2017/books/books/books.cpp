// books.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

void showAuthor(Book spis[], int n); // список книг заданного автора
void showNameGroup(Book spis[], int n); // список книг, выпущенных данным издательством
void showYear(Book spis[], int n); // список книг, выпущенных после заданного года


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");


	// массив книг
	Book *spis;
	int n;

	cout << "Введите количество книг: ";
	cin >> n; cout << endl << endl;

	spis = new Book[n];

	// вводим инфу 
	for (int i = 0; i < n; i++){
		spis[i].set();
		cout << endl << endl;
	}

	// вывод списка книг
	cout << "=================================" << endl;
	cout << "Список всех кнги в библиотеке" << endl;
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
	cout << "Введите автора: ";
	cin >> author; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг " << author << ":" << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_fio() == author){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " У данного автора нету книг или его не существует! ";
	}
	cout << endl << endl;
};

void showNameGroup(Book spis[], int n){
	string nameGroup;
	int col = 0;

	cout << "Введите издательство: ";
	cin >> nameGroup; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг, выпущенных заданным издательством: " << nameGroup << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_nameGroup() == nameGroup){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " У данного издательство нету книг или его не существует! ";
	}
	cout << endl << endl;
};

void showYear(Book spis[], int n){
	int year;
	int col = 0;
	cout << "Введите год: ";
	cin >> year; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг, выпущенных после заданного года: " << year << ":" << endl;
	cout << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_year() > year){
			spis[i].showBook();
			col++;
		}
	}

	if (col == 0){
		cout << " После заданного года не выпущено ни одной книги! ";
	}
	cout << endl << endl;
};

