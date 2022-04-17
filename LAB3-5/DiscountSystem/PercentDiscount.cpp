#include "../stdafx.h"

PercentDiscount::PercentDiscount(CategoryType category, int percent)
	: DiscountBase(category)
{
	SetPercent(percent);
}

void PercentDiscount::SetPercent(int percent)
{
	if (percent >= 0
		&& percent <= 100)
	{
		_percent = percent;
	}
	else
	{
		throw exception("Error: percent value must be in range from "
						"0 to 100.");
	}
}

int PercentDiscount::GetPercent()
{
	return _percent;
}

double PercentDiscount::CalculateCost(Product* product)
{
	if (product->GetCategory() == GetCategory())
	{
		return product->GetCostRoubles() * (100 - GetPercent()) / 100;
	}
	else
	{
		return product->GetCostRoubles();
	}
}
