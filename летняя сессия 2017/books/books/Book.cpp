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
	cout << "::Название книги:: " << nameBook << endl;
}