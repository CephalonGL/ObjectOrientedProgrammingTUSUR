#pragma once
#include "../Geometry/Validator.h"
#include "../Geometry/Point.h"

/// <summary>
/// Geometric figure rectangle
/// </summary>
class Rectangle
{
private:

	/// <summary>
	/// Center point
	/// </summary>
	Point _center;

	/// <summary>
	/// Rectangle's length
	/// </summary>
	double _length;

	/// <summary>
	/// Rectangles width
	/// </summary>
	double _width;

public:

	// TODO: точка намеренно по значению, а не по ссылке? +
	/// <summary>
	/// Creates new rectangle with length, width and center point
	/// </summary>
	/// <param name="length">Length</param>
	/// <param name="width">Width</param>
	/// <param name="center">Center point</param>
	Rectangle(double length,
			  double width, 
			  Point& center);

	/// <summary>
	/// Getter function for center point
	/// </summary>
	/// <returns>Center point</returns>
	Point& GetCenter();

	/// <summary>
	/// Setter function for center point
	/// </summary>
	/// <param name="x">New X coordinate of center</param>
	/// <param name="y">New Y coordinate of center</param>
	void SetCenter(double x, double y);

	// TODO: точка намеренно передается по значению, а не по ссылке? +
	/// <summary>
	/// Setter function for center point
	/// </summary>
	/// <param name="center">New center point</param>
	void SetCenter(Point& center);

	/// <summary>
	/// Getter function for length
	/// </summary>
	/// <returns>Length</returns>
	double GetLength();

	/// <summary>
	/// Setter funtion for length
	/// </summary>
	/// <param name="length">Length</param>
	void SetLength(double length);

	/// <summary>
	/// Getter function for width
	/// </summary>
	/// <returns>Width</returns>
	double GetWidth();

	/// <summary>
	/// Setter function for width
	/// </summary>
	/// <param name="width">width</param>
	void SetWidth(double width);
};

