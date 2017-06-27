
// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stack.h"
#include "iostream"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	Stack <int>stack1(3);
	Stack <char> stack2(3);

	stack1.print();
	stack1.push(10);
	stack1.push(100);
	stack1.push(12);
	stack1.print();
	stack1.pop();

	cout << endl;

	stack2.push('a');
	stack2.push('b');
	stack2.push('c');
	stack2.print();
	stack2.pop();

	system("pause");
    return 0;
}

