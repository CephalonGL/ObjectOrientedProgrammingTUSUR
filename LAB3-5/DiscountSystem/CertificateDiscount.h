#pragma once

class CertificateDiscount :
    public DiscountBase
{
private:
    int _amountRoubles;

public:
    CertificateDiscount(CategoryType category, 
                        int amountDiscountRoubles);

    int GetAmountRoubles();

    void SetAmountRoubles(int amountRoubles);

    double CalculateCost(Product* product) override;
};

