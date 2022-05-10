#pragma once
#include "../Geometry/Validator.h"

/// <summary>
/// Checker for double values
/// </summary>
static class Validator
{
public:

	/// <summary>
	/// Check if value positive
	/// </summary>
	/// <param name="value">Value to check</param>
	/// <returns>true if positive, false otherwise</returns>
	static bool IsValuePositive(double value);
	
	/// <summary>
	/// Check if value is in range
	/// </summary>
	/// <param name="value">Value to check</param>
	/// <param name="min">Left border</param>
	/// <param name="max">Right border</param>
	/// <returns></returns>
	static bool IsValueInRange(double value,
							   double min,
							   double max);
	
	/// <summary>
	/// Check if value positive and throw exception if not
	/// </summary>
	/// <param name="value">Value to check</param>
	static void AssertPositiveValue(double value);
	
	/// <summary>
	/// Check if value is in range
	/// </summary>
	/// <param name="value">Value to check</param>
	/// <param name="min">Left border</param>
	/// <param name="max">Right border</param>
	static void AssertValueInRange(double value,
								   double min,
								   double max);
};

