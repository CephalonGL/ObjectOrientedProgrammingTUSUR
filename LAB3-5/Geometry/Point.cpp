#include "../stdafx.h"
#include "../Geometry/Point.h"

Point::Point(double x, 
			 double y)
{
	SetX(x);
	SetY(y);
}

double Point::GetX()
{
	return _x;
}

void Point::SetX(double x)
{
	_x = x;
}

double Point::GetY()
{
	return _y;
}

void Point::SetY(double y)
{
	_y = y;
}

