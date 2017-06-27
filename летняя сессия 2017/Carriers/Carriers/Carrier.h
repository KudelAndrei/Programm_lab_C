#pragma once
#include "Route.h"

class Carrier
{
	float price; // 1 κμ
	float speed; // κμ/χ

public:
	char *name;

	Carrier();

	Carrier(float _price, float _speed);

	~Carrier();

	//Carrier get();
	void set(float _price, float _speed);
	void show();
	void showInfo();
	
	float TimeOfTrip(Route _route);
	int PriceOfTrip(Route _route);

};

