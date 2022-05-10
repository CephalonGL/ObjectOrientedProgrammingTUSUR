#pragma once

using namespace std;

/// <summary>
/// Geometric figure ring
/// </summary>
class Ring
{
private:

	/// <summary>
	/// Inner radius
	/// </summary>
	double _innerRadius = -1;

	/// <summary>
	/// Outer radius
	/// </summary>
	double _outerRadius = -1;

	/// <summary>
	/// Center point
	/// </summary>
	Point _center;

	/// <summary>
	/// Count of all existing rings
	/// </summary>
	static int _allRingsCount;

	/// <summary>
	/// CHeck if value positive
	/// </summary>
	/// <param name="value">Value</param>
	/// <returns>Value if positive, otherwise throw exception</returns>
	double AssertOnPositiveValue(double value);

public:

	// TODO: точка по ссылке или по значению? По ссылке +
	/// <summary>
	/// Creates new ring with inner, outer radiuses and center point
	/// </summary>
	/// <param name="innerRadius">Inner radius</param>
	/// <param name="outerRadius">Outer radius</param>
	/// <param name="center">Center point</param>
	Ring(double innerRadius,
		 double outerRadius, 
		 Point& center);

	/// <summary>
	/// Delete ring
	/// </summary>
	~Ring();

	/// <summary>
	/// Getter function for inner radius
	/// </summary>
	/// <returns>Inner radius</returns>
	double GetInnerRadius();

	/// <summary>
	/// Setter function for inner radius
	/// </summary>
	/// <param name="innerRadius">Inner radius</param>
	void SetInnerRadius(const double& innerRadius);

	/// <summary>
	/// Getter function for outer radius
	/// </summary>
	/// <returns>Outer radius</returns>
	double GetOuterRadius();

	/// <summary>
	/// Setter funtion for outer radius
	/// </summary>
	/// <param name="outerRadius">Outer radius</param>
	void SetOuterRadius(const double& outerRadius);

	/// <summary>
	/// Getter function for center
	/// </summary>
	/// <returns>Center</returns>
	Point& GetCenter();

	// TODO: а здесь уже по ссылке +
	/// <summary>
	/// Setter function for center
	/// </summary>
	/// <param name="center">Center</param>
	void SetCenter(const Point& center);

	/// <summary>
	/// Get area of ring
	/// </summary>
	/// <returns>Value of area</returns>
	double GetArea();

	/// <summary>
	/// Create new ring with inner, outer radiuses and center point
	/// </summary>
	/// <param name="innerRadius">Inner radius</param>
	/// <param name="outerRadius">Outer radius</param>
	/// <param name="center">Center point</param>
	/// <returns>New ring</returns>
	static Ring MakeRing(double innerRadius,
						 double outerRadius,
						 Point center);

	/// <summary>
	/// Getter function for all rings count
	/// </summary>
	/// <returns>All rings count</returns>
	static int GetAllRingsCount();
};

