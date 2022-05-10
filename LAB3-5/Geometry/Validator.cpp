#include "../stdafx.h"
#include "../Geometry/Validator.h"

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
		throw exception("Value must be more or equal to 0,"
						"but it is less than 0.");
	}
}

void Validator::AssertValueInRange(double value, 
								   double min, 
								   double max)
{
	if (!IsValueInRange(value, min, max))
	{
		//BUG: exception не умеет работать со string.
		// Придумать преобразование в char[] для отображения диапазона.
		// 
		//auto_ptr<char*> message =
		//{
		//	"Error: value must be in range of "
		//	+ min + " to " + max + "." 
		//};
		//string min = min;
		//string max = max;
		//string message11 = "Error: value must be in range of " 
		//	+ min + " to " + max + ".";

		throw exception("Error: value is out of range.");
	}
}
