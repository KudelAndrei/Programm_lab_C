#include "stdafx.h"
#include "Car.h"
#include "iostream"
using namespace std;


Car::Car()
{
	name = "������";
	power = 60;
}


Car::~Car()
{
}

void Car::showPower() {
	cout << "�������� ���������: " << power << endl;
}
