#pragma once

class PercentDiscount :
    public DiscountBase
{
private:
    int _percent;

public:
    PercentDiscount(CategoryType category,
                    int percent);

    void SetPercent(int percent);

    int GetPercent();

    double CalculateCost(Product* product) override;
};

