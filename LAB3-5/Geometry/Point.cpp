#include "Point.h"

Point::Point()
{
}

Point::Point(double x, double y)
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
	this->_x = x;
}

double Point::GetY()
{
	return _y;
}

void Point::SetY(double y)
{
	this->_y = y;
}

