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
		cout << "Автор: " << fio << endl;
		cout << "Название книги: " << nameBook << endl;
		cout << "Издательство: " << nameGroup << endl;
		cout << "Год: " << year << endl;
		cout << "Страниц: " << value << endl;
	}

	void set(){
		cout << "Автор: "; cin >> fio; cout << endl;
		cout << "Название книги: "; cin >> nameBook; cout << endl;
		cout << "Издательство: "; cin >> nameGroup; cout << endl;
		cout << "Год: "; cin >> year; cout << endl;
		cout << "Страниц: "; cin >> value; cout << endl ;
	}

	void showAuthor(Book spis[], int n){
		string author;
		cout << "Введите автора: ";
		cin >> author; cout << endl << endl;

		cout << "=================================" << endl;
		cout << "Список книг " << author << ":" << endl;
		cout << "=================================" << endl;
		for (int i = 0; i < n; i++){
			if (spis[i].get_fio() == author){
				spis[i].get_nameBook();
				cout << "Работает";
			}
		}
	}

};

