#include "stdafx.h"
#include "Book.h"
#include <iostream>
#include <string>


using namespace std;

Book::Book()
{
	fio = "������� ��� ��������";
	nameBook = "�������� �����";
	nameGroup = "������������";
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
	cout << "�����: " << fio << endl;
	cout << "�������� �����: " << nameBook << endl;
	cout << "������������: " << nameGroup << endl;
	cout << "���: " << year << endl;
	cout << "�������: " << value << endl;
}

void Book::set(){
	cout << "�����: "; cin >> fio; cout << endl;
	cout << "�������� �����: "; cin >> nameBook; cout << endl;
	cout << "������������: "; cin >> nameGroup; cout << endl;
	cout << "���: "; cin >> year; cout << endl;
	cout << "�������: "; cin >> value; cout << endl;
}

void Book::showBook(){
	cout << "�������� �����: " << nameBook << endl;
}

void Book::showAuthor(Book spis[], int n){
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
		//else cout << "���� ���� ������� ������..." << endl << endl;
	}
}

void Book::showNameGroup(Book spis[], int n){
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
		//else cout << "���� ����, ���������� �������� �������������..." << endl << endl;
	}
}

void Book::showYear(Book spis[], int n){
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
		//else cout << "���� ����, ���������� ����� ��������� ����..." << endl << endl;
	}
	cout << endl << endl;
}