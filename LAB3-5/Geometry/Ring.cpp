#include "..\stdafx.h"

int Ring::_allRingsCount = 0;

double Ring::AssertOnPositiveValue(double value)
{

	if (Validator::IsValuePositive(value))
	{
		return value;
	}
	else
	{
		throw exception("Error: value must be more or equal to 0,"
						" but it is less than 0.");
	}
}

Ring::Ring(double innerRadius,

		   double outerRadius, Point& center)
{
	SetInnerRadius(innerRadius);
	SetOuterRadius(outerRadius);
	SetCenter(Point(center.GetX(), center.GetY()));
	_allRingsCount++;
}

double Ring::GetInnerRadius()
{
	return _innerRadius;
}

Ring::~Ring()
{
	_allRingsCount--;
}

void Ring::SetInnerRadius(const double& innerRadius)
{
	_innerRadius = AssertOnPositiveValue(innerRadius);
}

double Ring::GetOuterRadius()
{
	return _outerRadius;
}

void Ring::SetOuterRadius(const double& outerRadius)
{
	if (GetInnerRadius() == -1)
	{
		throw exception("Error: set inner radius at first.");
	}
	else if (outerRadius <= GetInnerRadius())
	{
		throw exception("Error: outer radius must be more than inner.");
	}
	else
	{
		_outerRadius = AssertOnPositiveValue(outerRadius);
	}
}

Point& Ring::GetCenter()
{
	return _center;
}

void Ring::SetCenter(const Point& center)
{
	_center = center;
}

double Ring::GetArea()
{
	const double PI = 3.14;
	return PI * pow((GetOuterRadius() - GetInnerRadius()), 2.0);
}

Ring Ring::MakeRing(double innerRadius, 
					double outerRadius, 
					Point center)
{
	try
	{
		return Ring(2.0, 2.1, Point(2.2, 1.0));
	}
	catch (const exception& error)
	{
		cout << error.what();
	}
}

int Ring::GetAllRingsCount()
{
	return _allRingsCount;
}
