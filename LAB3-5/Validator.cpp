#include "stdafx.h"

bool Validator::IsValuePositive(const double& value)
{
	return value > 0;
}

bool Validator::IsValueInRange(const double& value, const double& min, const double& max)
{
	return value >= min
			&& value <= max;
}

void Validator::AssertPositiveValue(const double& value)
{
	if (!IsValuePositive(value))
	{
		throw exception("Value < 0.");
	}
}

void Validator::AssertValueInRange(const double& value, 
								   const double& min, 
								   const double& max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw exception("Value is out of range.");
	}
}
