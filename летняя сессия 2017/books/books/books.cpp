// books.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Book.h"
//#include "fun.cpp"
#include <iostream>
#include <string>

using namespace std;


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

	//showAuthor(spis, n);
	//showNameGroup(spis, n);
	//showYear(spis, n);

	system("pause");
	return 0;
}


