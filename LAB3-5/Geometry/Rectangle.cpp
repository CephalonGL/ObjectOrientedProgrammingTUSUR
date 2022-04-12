#include "..\stdafx.h"

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
		throw exception("Error: length < 0.");
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
		// TODO: во всех классах принципиально разные подходы к сообщениям об ошибке. Сделать единообразно
		throw exception("Error: width < 0.");
	}
}

Point& Rectangle::CalculateAverageCenterValue(vector<Rectangle> rectangles,
											  int rectanglesCount)
{
	Point averageCenterValue(0, 0);
	for (int i = 0; i < rectanglesCount; i++)
	{
		double newXCenter =
			averageCenterValue.GetX() + rectangles[i].GetCenter().GetX();

		double newYCenter =
			averageCenterValue.GetY() + rectangles[i].GetCenter().GetY();

		averageCenterValue = Point(newXCenter, newXCenter);
	}
	double xCenter = averageCenterValue.GetX() / rectanglesCount;
	double yCenter = averageCenterValue.GetY() / rectanglesCount;

	averageCenterValue = Point(xCenter, yCenter);

	return averageCenterValue;
}