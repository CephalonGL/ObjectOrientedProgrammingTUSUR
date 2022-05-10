#pragma once

// TODO: интерфейс - это иная сущность в ООП, для именования пользовательского интерфейса её лучше не использовать +
/// <summary>
/// User interface for User class
/// </summary>
static class UserProgram
{
public:

	/// <summary>
	/// Allow user to login to system
	/// </summary>
	/// <param name="users">All users in system</param>
	/// <param name="usersCount">Users count</param>
	/// <param name="enteredLogin">Entered login</param>
	/// <param name="enteredPassword">Entered password</param>
	/// <returns></returns>
	static User* Login(User** users,
					   int usersCount,
					   string enteredLogin,
					   string enteredPassword);

	/// <summary>
	/// Demonstrates work of User class
	/// </summary>
	static void DemoUsers();
};

