#pragma once

/// <summary>
/// Base class for discounts
/// </summary>
class DiscountBase
{
private:

	/// <summary>
	/// Good's category for discount
	/// </summary>
	CategoryType _category;

	/// <summary>
	/// Setter function for good's category 
	/// </summary>
	/// <param name="category">Category</param>
	void SetCategory(CategoryType category);

protected:
	
	/// <summary>
	/// Fill the good's category
	/// </summary>
	/// <param name="category">Category</param>
	DiscountBase(CategoryType category);

public:

	/// <summary>
	/// Getter fnction for good's category
	/// </summary>
	/// <returns>Good's category</returns>
	CategoryType GetCategory();

	/// <summary>
	/// Calculates new product cost with discount
	/// </summary>
	/// <param name="product">Product to calculate new cost</param>
	/// <returns>New cost</returns>
	virtual double CalculateCost(Product* product) = 0;

	/// <summary>
	/// Print check with all products and discount in console
	/// </summary>
	/// <param name="discount">Discount</param>
	/// <param name="products">Array of products</param>
	static void ShowCheckWithDiscount(DiscountBase* discount,
									  vector<Product*>& products);
};