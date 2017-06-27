#pragma once
#include <iomanip>
#include "iostream"
using namespace std;

template <typename Type>
class Stack
{
	Type *stackM;
	int size;
public:
	Type top;
	/*Stack(const Type _value);
	~Stack();

	void push(const Type _value);
	void print();
	void pop();*/

	Stack(Type _value)
	{
		size = _value > 0 ? _value : 100;
		stackM = new Type[size];
		top = -1;
	};

	~Stack()
	{
		//delete[] stackM;
	};

	void push(Type _value)
	{
		top++;
		stackM[top] = _value;
	};

	void print()
	{
		if (top >= 0) {
			cout << "Стэк: ";
			for (int i = size - 1; i >= 0; i--)
				if (stackM[i])
					cout << stackM[i] << " ";
		}
		else {
			cout << "Стек пуст!" << endl;
		}

		cout << endl;
		
	};

	void pop()
	{
		if (top == -1)
			cout << "Стэк пуст." << endl;
		else
			cout << "Последний элемент стека: " << stackM[top] << endl;
	};
};

