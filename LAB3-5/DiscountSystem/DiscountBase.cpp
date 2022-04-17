#include "../stdafx.h"

void DiscountBase::SetCategory(CategoryType category)
{
	_category = category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}

void DiscountBase::ShowCheckWithDiscount(DiscountBase* discount,
										 vector<Product*> products)
{
	int fullCostRoubles = 0;
	for (int i = 0; i < products.size(); i++)
	{
		int currentProductCostWithDiscount
			= discount->CalculateCost(products[i]);
		fullCostRoubles += currentProductCostWithDiscount;
		cout << products[i]->GetName() << "\t | "
			<< "Old cost: " << products[i]->GetCostRoubles() << '\t'
			<< "New cost: " << currentProductCostWithDiscount << endl;
	}
	cout << endl << "Full cost with discount: " << fullCostRoubles << endl
		<< "-----------------------------------------------"<< endl;
}

