#include "../stdafx.h"

bool Validator::IsValuePositive(double value)
{
	return value > 0;
}

bool Validator::IsValueInRange(double value, 
							   double min, 
							   double max)
{
	return value >= min
			&& value <= max;
}

void Validator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw exception("Value < 0.");
	}
}

void Validator::AssertValueInRange(double value, 
								   double min, 
								   double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw exception("Value is out of range.");
	}
}
