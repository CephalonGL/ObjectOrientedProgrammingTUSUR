#pragma once

class GeometricProgram
{
public:
	static void DemoRectangleWithPoint();

	static void DemoRing();

	static void DemoCollision();

	// TODO: ��� ���������� ���, � �� ����� ������ +
	static Point& CalculateAverageCenterValue(vector<Rectangle> rectangles,
											  int rectanglesCount);
};

