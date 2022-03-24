#include "Rectangle.h"

Point Rectangle::GetCenter()
{
	return center;
}

void Rectangle::SetCenter(double x, double y)
{
	center = Point(x, y);
}

double Rectangle::GetLength()
{
	return _length;
}

void Rectangle::SetLength(double length)
{
	if (length < 0)
	{
		throw exception("Error: length < 0.");
	}
	this->_length = length;
}

double Rectangle::GetWidth()
{
	return _width;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw exception("Error: width < 0.");
	}
	this->_width = width;
}

void Rectangle::DemoRectangleWithPoint()
{
	vector<Rectangle> rectangles;
	const int RECTANGLES_COUNT = 3;

	rectangles[0].SetCenter(5.2, 3.4);
	rectangles[0].SetLength(10);
	rectangles[0].SetWidth(5.5);

	rectangles[1].SetCenter(6.1, 2.8);
	rectangles[1].SetLength(4.4);
	rectangles[1].SetWidth(5.9);

	rectangles[2].SetCenter(12.5, 10.3);
	rectangles[2].SetLength(5);
	rectangles[2].SetWidth(5);

	for (int i = 0; i < RECTANGLES_COUNT; i++)
	{
		cout << "Rectangle " << i << ":" << endl;
		cout << "X = " << rectangles[i].GetCenter().GetX() << "; "
			<< "Y = " << rectangles[i].GetCenter().GetY() << "; "
			<< "Length = " << rectangles[i].GetLength() << "; "
			<< "Width = " << rectangles[i].GetWidth()  << "; " << endl;
	}
	Point averageCenterValue =
		CalculateAverageCenterValue(rectangles, RECTANGLES_COUNT);
	cout << "Xcenter = " << averageCenterValue.GetX() << "; "
		<< "Ycenter = " << averageCenterValue.GetY() << endl;
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