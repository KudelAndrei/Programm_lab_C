#include "stdafx.h"
#include "Route.h"


Route::Route()
{
	from = "�����";
	to = "������";
	distance = 719;
}

Route::Route(char *_from, char *_to, int _distance)
{
	from = _from;
	to = _to;
	distance = _distance;
}



Route::~Route()
{
}
