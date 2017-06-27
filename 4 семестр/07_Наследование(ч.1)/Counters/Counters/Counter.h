#pragma once

class Counter
{

protected:
	int count;

public:
	Counter();
	Counter(int _count);
	~Counter();

	void show();
	Counter operator++(int);

};

