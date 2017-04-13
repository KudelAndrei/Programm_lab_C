#pragma once
#include <ctime>
#include <iomanip>
#include <iostream>
#include "Array.h"
using namespace std;

class arrays
{
private:
	int n;
	Array *ptr;

public:
	arrays();
	arrays(int matrixSize);
	~arrays();
	void setMatr(int n);
	void showMatr(int n);
	void delMatrix(int n);
	
};

