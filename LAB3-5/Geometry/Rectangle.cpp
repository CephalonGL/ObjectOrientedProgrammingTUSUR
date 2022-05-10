#include "../stdafx.h"
#include "../Geometry/Rectangle.h"

Rectangle::Rectangle(double length, double width, Point& center)
{
	SetLength(length);
	SetWidth(width);
	SetCenter(center);
}

Point& Rectangle::GetCenter()
{
	return _center;
}

void Rectangle::SetCenter(double x, double y)
{
	_center = Point(x, y);
}

void Rectangle::SetCenter(Point& center)
{
	_center = center;
}

double Rectangle::GetLength()
{
	return _length;
}

void Rectangle::SetLength(double length)
{
	if (Validator::IsValuePositive(length))
	{
		_length = length;
	}
	else
	{
		throw exception("Error: length must be more or equal to 0,"
						" but it is less than 0.");
	}
}

double Rectangle::GetWidth()
{
	return _width;
}

void Rectangle::SetWidth(double width)
{
	if (Validator::IsValuePositive(width))
	{
		_width = width;
	}
	else
	{
		// TODO: во всех классах принципиально разные подходы к сообщениям об ошибке. Сделать единообразно +
		throw exception("Error: width must be more or equal to 0,"
						" but it is less than 0.");
	}
}
