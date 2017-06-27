#include "stdafx.h"
#include "Carrier.h"
#include <cstdlib>
#include "iostream"
using namespace std;


Carrier::Carrier()
{
	price = 0;
	speed = 0;
}

Carrier::Carrier(float _price, float _speed) {
	price = _price;
	speed = _speed;
}

Carrier::~Carrier()
{
}

void Carrier::set(float _price, float _speed) {
	price = _price;
	speed = _speed;
}

void Carrier::show() {
	cout << "÷ена за 1 км: " << price << endl;
	cout << "—редн€€ скорость в час: : " << speed << endl;
}

float Carrier::TimeOfTrip(Route _route) {

	return _route.distance / speed;
}

int Carrier::PriceOfTrip(Route _route) {

	return _route.distance * price;
}

