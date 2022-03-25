#pragma once

class Rectangle
{
private:

	Point center;

	double _length;

	double _width;

public:

	Point GetCenter();

	void SetCenter(double x, double y);

	double GetLength();

	void SetLength(double length);

	double GetWidth();

	void SetWidth(double width);

	void DemoRectangleWithPoint();

	Point& CalculateAverageCenterValue(vector<Rectangle> rectangles,
									   int rectanglesCount);
};

