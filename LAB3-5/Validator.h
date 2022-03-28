#pragma once

static class Validator
{
private:


public:
	static bool IsValuePositive(const double& value);
	
	static bool IsValueInRange(const double& value,
							   const double& min,
							   const double& max);
	
	static void AssertPositiveValue(const double& value);
	
	static void AssertValueInRange(const double& value,
								   const double& min,
								   const double& max);
};

