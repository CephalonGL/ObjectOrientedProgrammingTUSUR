#pragma once

/// <summary>
/// Class of user interface for geometry classes
/// </summary>
class GeometricProgram
{
public:

	/// <summary>
	/// Demonstrates work of Rectangle class
	/// </summary>
	static void DemoRectangleWithPoint();

	/// <summary>
	/// Demonstrates work of Ring class
	/// </summary>
	static void DemoRing();

	/// <summary>
	/// Demonstrates work of CollisionManager class
	/// </summary>
	static void DemoCollision();

	// TODO: это клиентский код, а не часть класса +
	/// <summary>
	/// Create new point with coordinates of average center
	/// </summary>
	/// <param name="rectangles">Rectangles to find average center</param>
	/// <param name="rectanglesCount">Count of rectangles</param>
	/// <returns>New average center point</returns>
	static Point& CalculateAverageCenterValue(vector<Rectangle>& rectangles,
											  int rectanglesCount);
};

