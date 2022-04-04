#pragma once

class Rectangle
{
private:

	Point _center;

	double _length;

	double _width;

public:
	// TODO: ����� ��������� �� ��������, � �� �� ������?
	Rectangle(double length,
			  double width,
			  Point center);

	Point& GetCenter();

	void SetCenter(double x, double y);

	// TODO: ����� ��������� ���������� �� ��������, � �� �� ������?
	void SetCenter(Point center);

	double GetLength();

	void SetLength(double length);

	double GetWidth();

	void SetWidth(double width);

	// TODO: ��� ���������� ���, � �� ����� ������
	static Point& CalculateAverageCenterValue(vector<Rectangle> rectangles,
											 int rectanglesCount);
};

