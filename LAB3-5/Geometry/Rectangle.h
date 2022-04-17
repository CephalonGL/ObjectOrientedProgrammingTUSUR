#pragma once

class Rectangle
{
private:

	Point _center;

	double _length;

	double _width;

public:
	// TODO: точка намеренно по значению, а не по ссылке? +
	Rectangle(double length,
			  double width, 
			  Point& center);

	Point& GetCenter();

	void SetCenter(double x, double y);

	// TODO: точка намеренно передается по значению, а не по ссылке? +
	void SetCenter(Point& center);

	double GetLength();

	void SetLength(double length);

	double GetWidth();

	void SetWidth(double width);

	
};

