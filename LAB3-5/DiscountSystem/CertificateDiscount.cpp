#include "../stdafx.h"

CertificateDiscount::CertificateDiscount(CategoryType category,
										 int amountDiscountRoubles)
	: DiscountBase(category)
{
	SetAmountRoubles(amountDiscountRoubles);
}

int CertificateDiscount::GetAmountRoubles()
{
	return _amountRoubles;
}

void CertificateDiscount::SetAmountRoubles(int amountRoubles)
{
	if (amountRoubles >= 0
		&& amountRoubles <= 10000)
	{
		_amountRoubles = amountRoubles;
	}
	else
	{
		throw exception("Error: amount in roubles must be in range "
						"from 0 to 10000.");
	}
}

double CertificateDiscount::CalculateCost(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		if (product->GetCostRoubles() <= this->GetAmountRoubles())
		{
			this->SetAmountRoubles(
				this->GetAmountRoubles() - product->GetCostRoubles());
			return 0.0;
		}
		else
		{
			int cost =
				product->GetCostRoubles() - this->GetAmountRoubles();
			this->SetAmountRoubles(0);
			return cost;
		}
	}
	else
	{
		return product->GetCostRoubles();
	}
}