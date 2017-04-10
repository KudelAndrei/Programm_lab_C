#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>


using namespace std;

Book::Book()
{
	fio = "Фамилия Имя Отчество";
	nameBook = "Название книги";
	nameGroup = "Издательство";
	year = 2017;
	value = 0;
}

Book::~Book(){}

int Book::get_year(){
	return year;
}

string Book::get_nameGroup(){
	return nameGroup;
}

string Book::get_nameBook(){
	return nameBook;
}

string Book::get_fio(){
	return fio;
}

void Book::show(){
	cout << "Автор: " << fio << endl;
	cout << "Название книги: " << nameBook << endl;
	cout << "Издательство: " << nameGroup << endl;
	cout << "Год: " << year << endl;
	cout << "Страниц: " << value << endl;
}

void Book::set(){
	cout << "Автор: "; cin >> fio; cout << endl;
	cout << "Название книги: "; cin >> nameBook; cout << endl;
	cout << "Издательство: "; cin >> nameGroup; cout << endl;
	cout << "Год: "; cin >> year; cout << endl;
	cout << "Страниц: "; cin >> value; cout << endl;
}

void Book::showBook(){
	cout << "Название книги: " << nameBook << endl;
}

void Book::showAuthor(Book spis[], int n){
	string author;
	cout << "Введите автора: ";
	cin >> author; cout << endl << endl;

	cout << "=================================" << endl;
	cout << "Список книг " << author << ":" << endl;
	cout << "=================================" << endl;
	for (int i = 0; i < n; i++){
		if (spis[i].get_fio() == author){
			spis[i].showBook();
			cout << "Работает";
		}
		//else cout << "Нету книг данного автора..." << endl << endl;
	}
}

void Book::showNameGroup(Book spis[], int n){
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
		//else cout << "Нету книг, выпущенных заданным издательством..." << endl << endl;
	}
}

void Book::showYear(Book spis[], int n){
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
		//else cout << "Нету книг, выпущенных после заданного года..." << endl << endl;
	}
	cout << endl << endl;
}