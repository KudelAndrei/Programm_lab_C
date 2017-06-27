// Carriers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Carrier.h"
#include "Car.h"
#include "Train.h"
#include "Aircraft.h"
#include <cmath>

#include "iostream"
using namespace std;

void showInfo(Carrier _carrier, Route _route);

int main()
{
	setlocale(LC_ALL, "rus");

	Route MinskBrest("Минск","Брест", 350),
		  MinskSlutsk("Минск", "Слуцк", 105), 
		  SlutskBrest("Слуцк", "Брест", 295);

	Car car1;
	Train train1;
	Aircraft aircraft1;

	car1.set(2, 65);
	train1.set(10, 55);
	aircraft1.set(20, 950);

	showInfo(car1, MinskSlutsk);
	showInfo(train1, MinskSlutsk);
	showInfo(aircraft1, SlutskBrest);

	car1.showPower();

	system("pause");
    return 0;

}

void showInfo(Carrier _carrier, Route _route) {
	cout << "************* На " << _carrier.name << " ****************" << endl;
	cout << "Время затраченное на путь из " << _route.from << "a в " << _route.to << " составило: " << round(_carrier.TimeOfTrip(_route)*100)/100
		<< " (час)" << " или " << round(_carrier.TimeOfTrip(_route) * 60) << " минут;" << endl;
	cout << "Стоимость передвежения составила: " << _carrier.PriceOfTrip(_route) << " рублей;" << endl;
	cout << "***************************************************" << endl;
	cout << endl;
};

