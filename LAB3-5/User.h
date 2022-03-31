#pragma once

class User
{
private:
	int _id;

	string _login;

	string _password;

	void SetId(int id);

	string CheckLogin(string login);

public:
	void SetLogin(string login);

	void SetPassword(string password);

	int GetId();

	string GetLogin();

	string GetPassword();

	User(int id, string login, string password);

	bool IsCorrectPassword(string password);
};


