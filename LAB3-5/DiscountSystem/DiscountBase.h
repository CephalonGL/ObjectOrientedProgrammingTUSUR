#pragma once

class DiscountBase
{
private:
	CategoryType _category;

	void SetCategory(CategoryType category);

protected:
	DiscountBase(CategoryType category);

public:
	CategoryType GetCategory();

	virtual double CalculateCost(Product* product) = 0;

	static void ShowCheckWithDiscount(DiscountBase* discount,
									  vector<Product*> products);

	static void DemoDiscount();
};