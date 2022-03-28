#pragma once

class Rectangle
{
private:

	Point _center;

	double _length;

	double _width;

public:
	Rectangle(double length,
			  double width,
			  Point center);

	Point& GetCenter();

	void SetCenter(double x, double y);

	void SetCenter(Point center);

	double GetLength();

	void SetLength(double length);

	double GetWidth();

	void SetWidth(double width);


	static Point& CalculateAverageCenterValue(vector<Rectangle> rectangles,
											 int rectanglesCount);
};

