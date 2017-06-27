#pragma once
#include "Sle.h"

class Inverse: public Sle
{
	float **t;
public:
	
	Inverse();
	~Inverse();

	void inverseMatr();
	float determ();

	float** transp();
	void showTransp();

};

