// Carriers.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	Route MinskBrest("�����","�����", 350),
		  MinskSlutsk("�����", "�����", 105), 
		  SlutskBrest("�����", "�����", 295);

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
	cout << "************* �� " << _carrier.name << " ****************" << endl;
	cout << "����� ����������� �� ���� �� " << _route.from << "a � " << _route.to << " ���������: " << round(_carrier.TimeOfTrip(_route)*100)/100
		<< " (���)" << " ��� " << round(_carrier.TimeOfTrip(_route) * 60) << " �����;" << endl;
	cout << "��������� ������������ ���������: " << _carrier.PriceOfTrip(_route) << " ������;" << endl;
	cout << "***************************************************" << endl;
	cout << endl;
};

