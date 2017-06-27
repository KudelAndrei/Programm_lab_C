#pragma once
class A
{
protected:
	int c1;
public:
	A();
	A(int _c1);
	~A();

	virtual void put(int put);
	virtual void receive();
};

