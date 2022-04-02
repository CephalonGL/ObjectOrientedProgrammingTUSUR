#pragma once

class PercentDiscount :
    public DiscountBase
{
private:
    int _percent;

public:
    PercentDiscount(CategoryType category,
                    int percent);

    int GetPercent();

    void SetPercent(int percent);

    double CalculateCost(Product* product) override;
};

