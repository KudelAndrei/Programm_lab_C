// MMF1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "head.h"
#include <iostream>
#include <string> 
#include <fstream> 

using namespace std;

int _tmain()
{
	Strings *spis;
	Strings obj;
	Strings story;
	int n,count;
	cout << "Input a number of strings: "; cin >> n;
	spis = new Strings[n];
	int ch = 1;
	for (int i = 0; i<n; i++) {
		spis[i].set();
	}

	cout << "==============================" << endl;
	for (int i = 0; i<n; i++) {
		cout << ch << ". ";
		spis[i].get();
		ch++;
	}
	cout << "==============================" << endl;


label1: cout << "Pick: 1 - strcat(+); 2 - strcpy(++); 3 - Read to file; 4 - Write from file "; cin >> count;
	switch (count)
	{
	case 1:
	{
		
		for (int i = 0; i<n; i++) {
			story + spis[i].stroka;
		}
		story.getStr();
		
		goto label1;
		break;

	}
	case 2:
	{
		for (int i = 0; i<n; i++) {
			story - spis[i].stroka;
		}
		story.getStr();
		story.str;
		goto label1;
		break;

	}
	case 3:
	{
		obj.ReadToFile(spis, n, story.str);
		goto label1;
		break;

	}
	case 4:
	{
		obj.WriteToFile(spis, n, story.str);
		goto label1;
		break;

	}

	default:
		cout << "Error input" << endl;
		goto label1;
	}

	system("pause");
	return 0;

}

