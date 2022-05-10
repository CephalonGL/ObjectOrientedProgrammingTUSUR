#include "../stdafx.h"
#include "../Geometry/GeometricProgram.h"

using namespace std;

void GeometricProgram::DemoRectangleWithPoint()
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
			<< "Width = " << rectangles[i].GetWidth() << "; " << endl;
	}
	Point averageCenterValue =
		GeometricProgram::CalculateAverageCenterValue(
			rectangles, RECTANGLES_COUNT);
	cout << "Xcenter = " << averageCenterValue.GetX() << "; "
		<< "Ycenter = " << averageCenterValue.GetY() << endl;
}

void GeometricProgram::DemoRing()
{
	vector<Ring> rings;
	rings.push_back(Ring::MakeRing(3.0, 4.5, Point(1.0, 4.0)));
	rings.push_back(Ring::MakeRing(4.0, 4.5, Point(0.0, 0.0)));
	rings.push_back(Ring::MakeRing(2.0, -2.1, Point(2.2, 1.0)));
	rings.push_back(Ring::MakeRing(10.0, 4.5, Point(1.0, 1.0)));

	for (int i = 0; i < rings.size(); i++)
	{
		cout << rings[i].GetArea() << endl;
		cout << "Count of all rings: " << Ring::GetAllRingsCount() << endl;
	}
	cout << "Count of rings before constructor call: "
		<< Ring::GetAllRingsCount() << endl;
	Point point(25.0, 25.0);
	Ring* ring = new Ring(10.0, 5.0, point);
	cout << "Count of rings after constructor call: "
		<< Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "Count of rings after destructor call: "
		<< Ring::GetAllRingsCount() << endl;
}

void GeometricProgram::DemoCollision()
{
	vector<Rectangle> rectangles;
	vector<Point> rectanglesCenterPoints;
	rectanglesCenterPoints[0] = Point(0.0, 0.0);
	rectangles.push_back(Rectangle(10.0, 4.0, rectanglesCenterPoints[0]));
	rectanglesCenterPoints[1] = Point(3.0, 2.0);
	rectangles.push_back(Rectangle(8.0, 6.0, rectanglesCenterPoints[1]));
	cout << "Are rectangles 0 and 1 have collision: " <<
		CollisionManager::IsCollision(rectangles[0], rectangles[1]);

	rectanglesCenterPoints[2] = Point(10.0, 10.0);
	rectangles.push_back(Rectangle(3.0, 3.0, rectanglesCenterPoints[2]));
	rectanglesCenterPoints[3] = Point(0.0, 0.0);
	rectangles.push_back(Rectangle(4.0, 4.0, rectanglesCenterPoints[3]));
	cout << "Are rectangles 2 and 3 have collision: " <<
		CollisionManager::IsCollision(rectangles[2], rectangles[3]);

	vector<Ring> rings;
	vector<Point> ringsCenterPoints;
	ringsCenterPoints[0] = Point(3.0, 3.0);
	rings.push_back(Ring(2.0, 5.0, ringsCenterPoints[0]));
	ringsCenterPoints[1] = Point(3.0, 8.0);
	rings.push_back(Ring(1.0, 4.0, ringsCenterPoints[1]));
	cout << "Are rings 0 and 1 have collision: " <<
		CollisionManager::IsCollision(rings[0], rings[1]);

	ringsCenterPoints[2] = Point(0.0, 0.0);
	rings.push_back(Ring(4.0, 5.0, ringsCenterPoints[2]));
	ringsCenterPoints[3] = Point(10.0, 10.0);
	rings.push_back(Ring(3.0, 7.0, ringsCenterPoints[3]));
	cout << "Are rings 2 and 3 have collision: " <<
		CollisionManager::IsCollision(rings[2], rings[3]);
}

Point& GeometricProgram::CalculateAverageCenterValue(vector<Rectangle>& rectangles, int rectanglesCount)
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
