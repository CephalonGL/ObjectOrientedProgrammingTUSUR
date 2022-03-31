#pragma once

static class UserInterface
{
public:
	static User* Login(User** users,
				int usersCount,
				string enteredLogin,
				string enteredPassword);

	static void DemoUsers();
};

