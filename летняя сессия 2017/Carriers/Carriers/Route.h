#pragma once
#include <string>
#include "iostream"

class Route
{
	
public:

	char *from;
	char *to;

	int distance;
	Route();
	Route(char *_from, char *_to, int _distance);
	~Route();

};

