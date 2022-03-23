#pragma once

class Point
{
private:
	
	double _x;

	double _y;

public:

	Point(double x, double y);

	double GetX();

	void SetX(double x);
	
	double GetY();
	
	void SetY(double y);
};

