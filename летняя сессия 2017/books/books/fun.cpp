#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

//void showAuthor(Book spis[], int n){
//	string author;
//	cout << "Введите автора: ";
//	cin >> author; cout << endl << endl;
//
//	cout << "=================================" << endl;
//	cout << "Список книг " << author << ":" << endl;
//	cout << "=================================" << endl;
//	for (int i = 0; i < n; i++){
//		if (spis[i].get_fio() == author){
//			spis[i].showBook();
//			cout << "Работает";
//		}
//	}
//}

void showNameGroup(Book spis[], int n){
	string nameGroup;
	cout << "Введите издательство: ";
	cin >> nameGroup; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг, выпущенных заданным издательством: " << nameGroup << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_nameGroup() == nameGroup){
			spis[i].showBook();
			cout << "Работает";
		}
	}
}

void showYear(Book spis[], int n){
	int year;
	cout << "Введите год: ";
	cin >> year; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг, выпущенных после заданного года: " << year << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_year() > year){
			spis[i].showBook();
			cout << "Работает";
		}
	}
	cout << endl << endl;
}