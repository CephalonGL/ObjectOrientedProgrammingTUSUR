#include "../stdafx.h"

void User::SetId(int id)
{
	_id = id;
}

string& User::CheckLogin(string& login)
{
	vector<char> unresolvedSumbols
	{
		'{', '}', '<', '>', '@', '#', '$', '%', '^', ':', '*'
	};
	for (int i = 0; i < login.length(); i++)
	{
		// TODO: добавить все запретные символы в один массив или строку, перебирать в цикле +
		for (int j = 0; j < unresolvedSumbols.size(); j++)
		{
			if (login[i] == unresolvedSumbols[j])
			{
				throw exception("Error: login can not use special symbols "
								"like: { ,}, <, >, @, # , $, %, ^, :, *.");
			}
		}
	}
	return login;
}

void User::SetLogin(string& login)
{
	_login = CheckLogin(login);
}

void User::SetPassword(string& password)
{
	_password = password;
}

int User::GetId() { return _id; }

const string& User::GetLogin() { return _login; }

const string& User::GetPassword() { return _password; }

User::User(int id, 
		   string login, 
		   string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(string& password)
{
	return (password == _password);
}