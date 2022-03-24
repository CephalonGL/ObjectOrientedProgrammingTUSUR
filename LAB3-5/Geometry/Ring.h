#pragma once
#include <iostream>
#include <exception>
#include <vector>
#include"..\ClassesAndIncapsulation\Point.h"

using namespace std;

class Ring
{
private:

	double _innerRadius = -1;

	double _outerRadius = -1;

	Point _center;

	bool AssertOnPositiveValue();

private:

	Ring();
	Ring(double innerRadius,
		 double outerRadius,
		 Point center);

	double GetInnerRadius();
	void SetInnerRadius(double innerRadius);

	double GetOuterRadius();
	void SetOuterRadius(double outerRadius);

	Point GetCenter();
	void SetCenter(Point center);

	double GetArea();

	static void DemoRing();

};

