#include "stdafx.h"
#include "head.h"
#include <iostream>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы
#include <iomanip>
#include <stdlib.h>

using namespace std;

void Strings::set(){
	
	cout << "\\\\\\\\\\\\\\New string///////////////" << endl;
	cout << "Input string: "; 
	_flushall();
	cin.getline(stroka, 256);
	_flushall();
	//getline(cin, stroka);
}

void Strings::get(){
	cout << "String: " << stroka << endl;
}

void Strings::operator +(char *s) //что должен выполнить оператор +
{
	strcat_s(str, s); //сложение строк
}

void Strings::operator -(char *s){
	strcpy_s(str, s);
}

void Strings::getStr()
{
	cout << str << endl;//вывод символьного массива класса на экран
}

void Strings::ReadToFile(Strings spis[], int lenght, string s) {
	int ch = 1;
	std::ofstream out("C:\\1.txt");
	if (!out) {
		cout << "Cannot open file.\n";
	}
	if (s != "") {
		out << s;
	}
	else {
		for (int i = 0; i < lenght; i++)
		{
			out << spis[i].stroka << endl;
		}
	}
	out.close();
}


void Strings::ReadToMassiv(Strings spis[], int lenght) {
	int ch = 1;
	std::ofstream out("C:\\1.txt");
	if (!out) {
		cout << "Cannot open file.\n";
	}
	out.clear();
	for (int i = 0; i<lenght; i++)
	{	
		if (spis[i].stroka != "") {
			out << spis[i].stroka << ";";
		}
	//	cout << ch <<". " << spis[i].stroka << endl;
		ch++;
	}
	out.close();

}



void Strings::WriteToFile(Strings spis[], int lenght, string s) {
	std::ifstream f("C:\\1.txt");
	if (!f) {
		cout << "Cannot open file.\n";
	}

	Strings *ss;
	int ch = 1;
	for (string line; getline(f, line);) {
		ch++;
	}
	ss = new Strings[ch];
	int i = 0;
	f.clear();
	f.seekg(0);
	while (!f.eof()){
			
			try
			{
				f >> ss[i].stroka;
			//	getline(f, s[i].stroka);
				i++;
			}
			catch (exception e)
			{}
	}
	ReadToMassiv(ss, i);
}