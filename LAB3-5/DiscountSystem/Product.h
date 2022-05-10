#pragma once

/// <summary>
/// Class for good's
/// </summary>
class Product
{
private:

	/// <summary>
	/// Name of product
	/// </summary>
	string _name;

	/// <summary>
	/// Category of product
	/// </summary>
	CategoryType _category;

	/// <summary>
	/// Product cost in roubles
	/// </summary>
	int _costRoubles;

public:

	/// <summary>
	/// Fill name, category and cost in roubles when created
	/// </summary>
	/// <param name="name"></param>
	/// <param name="category"></param>
	/// <param name="costRoubles"></param>
	Product(string name,
			CategoryType category,
			int costRoubles);

	/// <summary>
	/// Getter function for name
	/// </summary>
	/// <returns>Name</returns>
	string GetName();

	/// <summary>
	/// Setter function for name
	/// </summary>
	/// <param name="name">Name</param>
	void SetName(string name);

	/// <summary>
	/// Getter function for category
	/// </summary>
	/// <returns>Category</returns>
	CategoryType GetCategory();

	/// <summary>
	/// Setter function for category
	/// </summary>
	/// <param name="category">Category</param>
	void SetCategory(CategoryType category);

	/// <summary>
	/// Getter function for cost in roubles
	/// </summary>
	/// <returns>Cost in roubles</returns>
	int GetCostRoubles();

	/// <summary>
	/// Setter function for cost in roubles
	/// </summary>
	/// <param name="costRoubles">Cost in roubles</param>
	void SetCostRoubles(int costRoubles);
};