#pragma once

/// <summary>
/// Website user
/// </summary>
class User
{
private:

	/// <summary>
	/// ID
	/// </summary>
	int _id;

	/// <summary>
	/// Login
	/// </summary>
	string _login;

	/// <summary>
	/// Password
	/// </summary>
	string _password;

	/// <summary>
	/// Setter function for ID
	/// </summary>
	/// <param name="id">ID</param>
	void SetId(int id);

	/// <summary>
	/// Check if login has unresolved symbols
	/// </summary>
	/// <param name="login">Login to check</param>
	/// <returns>Login if correct, throw exception otherwise</returns>
	string& CheckLogin(string& login);

public:

	/// <summary>
	/// Setter function for login
	/// </summary>
	/// <param name="login">Login</param>
	void SetLogin(string& login);

	/// <summary>
	/// Setter function for password
	/// </summary>
	/// <param name="password">Password</param>
	void SetPassword(string& password);

	/// <summary>
	/// Getter function for ID
	/// </summary>
	/// <returns>ID</returns>
	int GetId();

	/// <summary>
	/// Getter function for login
	/// </summary>
	/// <returns>Login</returns>
	const string& GetLogin();

	/// <summary>
	/// Getter function for password
	/// </summary>
	/// <returns>Password</returns>
	const string& GetPassword();

	// Не могу сделать передачу строк по ссылке, т.к. иначе 
	// конструктор будет требовать левостороннее значение 
	/// <summary>
	/// Creates new user and fills fields
	/// </summary>
	/// <param name="id">ID</param>
	/// <param name="login">Login</param>
	/// <param name="password">Password</param>
	User(int id, 
		 string login, 
		 string password);

	/// <summary>
	/// Check if password correct
	/// </summary>
	/// <param name="password">Password to check</param>
	/// <returns>True if correct, false if not</returns>
	bool IsCorrectPassword(string& password);
};


