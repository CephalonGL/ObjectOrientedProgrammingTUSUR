#pragma once

class GeometricProgram
{
public:
	static void DemoRectangleWithPoint();

	static void DemoRing();

	static void DemoCollision();

	// TODO: это клиентский код, а не часть класса +
	static Point& CalculateAverageCenterValue(vector<Rectangle> rectangles,
											  int rectanglesCount);
};

