#pragma once

static class Validator
{
private:


public:
	static bool IsValuePositive(double value);
	
	static bool IsValueInRange(double value,
							   double min,
							   double max);
	
	static void AssertPositiveValue(double value);
	
	static void AssertValueInRange(double value,
								   double min,
								   double max);
};

