#ifndef MMF1_H_
#define MMF1_H_
#include <string>
#include "stdafx.h"

class Strings {
public: char stroka[256];
		char str[256];
public: void set();
		void get();
		Strings()
		{
			for (int i = 0; i < 256; i++) {
				str[i] = '\0';
				stroka[i] = '\0';
			}
		}
		void ReadToFile(Strings spis[], int lenght, std::string s);
		void WriteToFile(Strings spis[], int lenght, std::string s);
		void ReadToMassiv(Strings spis[], int lenght);
		void operator +(char*);
		void operator -(char*);
		void getStr();
};



#endif