#pragma once
#include "Carrier.h"

class Car: public Carrier
{
	float power;
public:
	Car();
	~Car();

	void showPower();

};

