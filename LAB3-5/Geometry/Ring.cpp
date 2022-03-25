#include "..\stdafx.h"

bool Ring::AssertOnPositiveValue()
{
	return false;
}

Ring::Ring()
{
}

Ring::Ring(double innerRadius,
		   double outerRadius,
		   Point center)
{
	SetInnerRadius(innerRadius);
	SetOuterRadius(outerRadius);
	SetCenter(center);
}

double Ring::GetInnerRadius()
{
	return _innerRadius;
}

void Ring::SetInnerRadius(double innerRadius)
{
	if (innerRadius < 0)
	{
		throw exception("Error: inner radius is out of range.");
	}
	else
	{
		_innerRadius = innerRadius;
	}
}

double Ring::GetOuterRadius()
{
	return _outerRadius;
}

void Ring::SetOuterRadius(double outerRadius)
{
	if (GetInnerRadius() == -1)
	{
		throw exception("Error: set inner radius at first.");
	}
	if (outerRadius < 0)
	{
		throw exception("Error: outer radius is out of range.");
	}
	if (outerRadius <= GetInnerRadius())
	{
		throw exception("Error: outer radius must be more than inner.");
	}
	else
	{
		_outerRadius = outerRadius;
	}
}

Point Ring::GetCenter()
{
	return _center;
}

void Ring::SetCenter(Point center)
{
	_center = center;
}

double Ring::GetArea()
{
	const double PI = 3.14;
	return PI * pow((GetOuterRadius() - GetInnerRadius()), 2.0);
}

void Ring::DemoRing()
{
	vector<Ring> rings;
	//TODO: make simple
	try
	{
		rings[0] = Ring(3.0, 4.5, Point(1.0, 4.0));
	}
	catch (const std::exception& error)
	{
		cout << error.what();
	}
	try
	{
		rings[1] = Ring(4.0, 4.5, Point(0.0, 0.0));
	}
	catch (const std::exception& error)
	{
		cout << error.what();
	}
	try
	{
		rings[2] = Ring(2.0, 2.1, Point(2.2, 1.0));
	}
	catch (const std::exception& error)
	{
		cout << error.what();
	}
	try
	{
		rings[3] = Ring(10.0, 4.5, Point(1.0, 1.0));
	}
	catch (const std::exception& error)
	{
		cout << error.what();
	}

	for (int i = 0; i < rings.size(); i++)
	{
		rings[i].GetArea();
	}


}
