#pragma once

class Array
{

	private:

		int *ptr;
		int n;

	public:

		Array();
		Array(int n);
		~Array();
		void setArray();
		void getArray();
		void setSize(int n);
		int getSize() const;

};

