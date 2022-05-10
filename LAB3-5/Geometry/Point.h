#pragma once

/// <summary>
/// Geometric point on plane XOY
/// </summary>
class Point
{
private:
	
	/// <summary>
	/// X coordinate
	/// </summary>
	double _x;

	/// <summary>
	/// Y coordinate
	/// </summary>
	double _y;

	/// <summary>
	/// Setter function for X coordinate
	/// </summary>
	/// <param name="x">X coordinate</param>
	void SetX(double x);

	/// <summary>
	/// Setter function for Y coordinate
	/// </summary>
	/// <param name="y">Y coordinate</param>
	void SetY(double y);

public:

	/// <summary>
	/// Creates new point with X and Y coordinates
	/// </summary>
	/// <param name="x">X coordinate</param>
	/// <param name="y">Y coordinate</param>
	Point(double x = 0.0, 
		  double y = 0.0);

	/// <summary>
	/// Getter function for X coordinate
	/// </summary>
	/// <returns>X coordinate</returns>
	double GetX();

	/// <summary>
	/// Getter function for Y coordinate
	/// </summary>
	/// <returns>Y coordinate</returns>
	double GetY();
};

