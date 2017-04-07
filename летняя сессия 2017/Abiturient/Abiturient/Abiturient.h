#pragma once
#include <iostream>
using namespace std;

class Abiturient
{
	public:
		char lastName[50];
		string firstName;
		string patronymicName;
		string address;
		int value;

		Abiturient();

		void set_Abiturient(char a_lastName[50], string a_firstName, string a_patronymicName, string a_address, int a_value){
			lastName[50] = a_lastName[50];
			firstName = a_firstName;
			patronymicName = a_patronymicName;
			address = a_address;
			value = a_value;
		}

		string get_LastName(){
			return lastName;
		}

		void get_Abiturient(){
			cout << "Фамилия: " << lastName << ", ";
		}
};

