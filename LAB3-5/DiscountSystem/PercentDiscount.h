#pragma once

/// <summary>
/// Class for percentage discount
/// </summary>
class PercentDiscount :
    public DiscountBase
{
private:

    /// <summary>
    /// Percent of discount
    /// </summary>
    int _percent;

public:

    /// <summary>
    /// Fill category and percent of amount when created
    /// </summary>
    /// <param name="category"></param>
    /// <param name="percent"></param>
    PercentDiscount(CategoryType category,
                    int percent);

    /// <summary>
    /// Getter function for discount percent
    /// </summary>
    /// <returns></returns>
    int GetPercent();

    /// <summary>
    /// Setter function for discount percent
    /// </summary>
    /// <param name="percent"></param>
    void SetPercent(int percent);

    /// <summary>
    /// Calculate new cost of product with percentage discount
    /// </summary>
    /// <param name="product">Product to calculate cost</param>
    /// <returns>New cost with discount</returns>
    double CalculateCost(Product* product) override;
};

