#include "../stdafx.h"

User* UserInterface::Login(User** users,
						   int usersCount,
						   string enteredLogin,
						   string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}

void UserInterface::DemoUsers()
{
	User** users = new User * []
	{
		new User(100000, "morkovka1995", "1995morkovka"),
			new User(100001, "ilon_mask", "X æ A-12"),
			new User(100002, "megazver", "password"),
			new User(100003, "yogurt", "ksTPQzSu"),
	};
	User** paidUsers = new User * []
	{
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
			new PaidUser(200001, "system_exe", "UgfkDGmU"),
			new PaidUser(200002, "RazorQ", "TBgRnbCP"),
			new PaidUser(200003, "schdub", "CetyQVID"),
	};
	string login = "megazver";
	string password = "password";
	User* loginedUser = UserInterface::Login(users, 4, login, password);
	cout << "Signed in as: " << loginedUser->GetLogin() << endl;
	login = "system_exe";
	password = "UgfkDGmU";
	User* loginedPaidUser =
		UserInterface::Login(paidUsers, 4, login, password);
	cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;
	for (int i = 0; i < 4; i++)
	{
		delete users[i];
	}
	delete[] users;
	for (int i = 0; i < 4; i++)
	{
		delete paidUsers[i];
	}
	delete[] paidUsers;
}