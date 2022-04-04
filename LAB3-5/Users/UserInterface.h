#pragma once

// TODO: интерфейс - это иная сущность в ООП, для именования пользовательского интерфейса её лучше не использовать
static class UserInterface
{
public:
	static User* Login(User** users,
				int usersCount,
				string enteredLogin,
				string enteredPassword);

	static void DemoUsers();
};

