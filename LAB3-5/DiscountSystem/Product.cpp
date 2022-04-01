#include "../stdafx.h"

Product::Product(string name, CategoryType category, int costRoubles)
{
	SetName(name);
	SetCategory(category);
	SetCostRoubles(costRoubles);
}

string Product::GetName()
{
	return _name;
}

void Product::SetName(string name)
{
	_name = name;
}

CategoryType Product::GetCategory()
{
	return _category;
}

void Product::SetCategory(CategoryType category)
{
	_category = category;
}

int Product::GetCostRoubles()
{
	return _costRoubles;
}

void Product::SetCostRoubles(int costRoubles)
{
	if (costRoubles > 0
		&& costRoubles <= 100000)
	{
		_costRoubles = costRoubles;
	}
	else
	{
		throw exception("Error: cost in roubles must be in range from"
						" 0 to 100000.");
	}
}
