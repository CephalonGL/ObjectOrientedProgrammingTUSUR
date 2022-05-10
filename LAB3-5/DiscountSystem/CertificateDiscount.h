#pragma once
#include "../DiscountSystem/DiscountBase.h"

/// <summary>
/// Discount certificate for amount
/// </summary>
class CertificateDiscount :
    public DiscountBase
{
private:

    /// <summary>
    /// Amount of certificate in roubles
    /// </summary>
    int _amountRoubles;

public:
    
    /// <summary>
    /// Creates new certificate discount
    /// </summary>
    /// <param name="category">Type electronics category</param>
    /// <param name="discountAmountRoubles">Discount amount</param>
    CertificateDiscount(CategoryType category, 
                        int discountAmountRoubles);

    /// <summary>
    /// Getter function for amount
    /// </summary>
    /// <returns>Amount</returns>
    int GetAmountRoubles();

    /// <summary>
    /// Setter function for amount
    /// </summary>
    /// <param name="amountRoubles">Amount</param>
    void SetAmountRoubles(int amountRoubles);

    /// <summary>
    /// Calculate new cost with discount
    /// </summary>
    /// <param name="product">Product to calculate</param>
    /// <returns>New cost of product</returns>
    double CalculateCost(Product* product) override;
};

