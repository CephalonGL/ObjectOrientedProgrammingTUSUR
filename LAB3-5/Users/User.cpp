#include "../stdafx.h"

void User::SetId(int id)
{
	_id = id;
}

string User::CheckLogin(string login)
{
	for (int i = 0; i < login.length(); i++)
	{
		// TODO: �������� ��� ��������� ������� � ���� ������ ��� ������, ���������� � �����
		if (login[i] == '{'
			|| login[i] == '}'
			|| login[i] == '<'
			|| login[i] == '>'
			|| login[i] == '@'
			|| login[i] == '#'
			|| login[i] == '$'
			|| login[i] == '%'
			|| login[i] == '^'
			|| login[i] == ':'
			|| login[i] == '*')
		{
			throw exception("Error: login can not use special symbols "
							"like: { ,}, <, >, @, # , $, %, ^, :, *.");
		}
	}
	return login;
}

void User::SetLogin(string login)
{
	_login = CheckLogin(login);
}

void User::SetPassword(string password)
{
	_password = password;
}

int User::GetId() { return _id; }

string User::GetLogin() { return _login; }

string User::GetPassword() { return _password; }

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}