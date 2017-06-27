#pragma once

class Sle
{
protected:
	int n, m;
	float **matrix;
	float *xx;
	int  tmp;

public:

	Sle();
	Sle(int _n, int _m);
	~Sle();

	void set();
	void showMatr();
	void metodGaus();

};

