#pragma once

class Point
{
private:
	
	double _x;

	double _y;

	void SetX(double x);

	void SetY(double y);

public:

	Point(double x = 0.0, 
		  double y = 0.0);

	double GetX();

	double GetY();
};

