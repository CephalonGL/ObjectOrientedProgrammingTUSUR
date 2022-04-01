#pragma once

class Product
{
private:
	string _name;

	CategoryType _category;

	int _costRoubles;

public:
	Product(string name,
			CategoryType category,
			int costRoubles);

	string GetName();
	void SetName(string name);

	CategoryType GetCategory();
	void SetCategory(CategoryType category);

	int GetCostRoubles();
	void SetCostRoubles(int costRoubles);
};