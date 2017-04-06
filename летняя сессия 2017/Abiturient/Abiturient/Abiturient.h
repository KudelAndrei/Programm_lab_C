#pragma once
class Abiturient
{
	private:
		char lastName;
		char firstName;
		char patronymicName;
		char address;
		int value;

	public:
		Abiturient();
		~Abiturient();
		void getAbiturient(char lastName, char firstName, char patronymicName, char address, int value){
			cout << "Èìÿ: " << lastName;

		}
};

