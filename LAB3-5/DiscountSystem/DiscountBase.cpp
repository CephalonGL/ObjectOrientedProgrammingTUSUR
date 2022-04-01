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

void DiscountBase::DemoDiscount()
{
	Product* notebook = 
		new Product("Lenovo Yoga", Notebook, 79990);
	Product* computerMouse = 
		new Product("A4Tech ZL5", ComputerMouse, 5990);
	Product* personalComputer = 
		new Product("Lenovo ThinkCenter", PersonalComputer, 99990);
	Product* keyboard = 
		new Product("Logitech G413", Keyboard, 6990);

	vector<Product*> products;
	products.push_back(notebook);
	products.push_back(computerMouse);
	products.push_back(personalComputer);
	products.push_back(keyboard);

	PercentDiscount percentDiscount = 
		PercentDiscount(Notebook, 15);
	CertificateDiscount certificateDiscount = 
		CertificateDiscount(Keyboard, 5000);

	cout << "Percent discount: " << endl;
	ShowCheckWithDiscount(&percentDiscount, products);
	cout << endl << "Certificate discount: " << endl;
	ShowCheckWithDiscount(&certificateDiscount, products);
	cout << endl;
}
