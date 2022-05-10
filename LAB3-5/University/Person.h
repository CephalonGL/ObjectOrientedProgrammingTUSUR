#pragma once

/// <summary>
/// Stores information about person
/// </summary>
class Person
{
private:

	/// <summary>
	/// Name
	/// </summary>
	string _name;
	
	/// <summary>
	/// Surname
	/// </summary>
	string _surname;
	
	/// <summary>
	/// Patronymic
	/// </summary>
	string _patronymic;

public:

	/// <summary>
	/// Creates person with name, surname and patronymic
	/// </summary>
	/// <param name="name">Name</param>
	/// <param name="surname">Surname</param>
	/// <param name="patronymic">Patronymic</param>
	Person(string name,
		   string surname,
		   string patronymic);

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
	/// Getter function for surname
	/// </summary>
	/// <returns>Surname</returns>
	string GetSurname();

	/// <summary>
	/// Setter function for surname
	/// </summary>
	/// <param name="surname">Surname</param>
	void SetSurname(string surname);

	/// <summary>
	/// Getter function for patronymic
	/// </summary>
	/// <returns>Patronymic</returns>
	string GetPatronymic();

	/// <summary>
	/// Setter function for patronymic
	/// </summary>
	/// <param name="patronymic">Patronymic</param>
	void SetPatronymic(string patronymic);
};

