#include "../stdafx.h"
#include "../University/Person.h"

Person::Person(string name,
			   string surname,
			   string patronymic)
{
	SetName(name);
	SetSurname(surname);
	SetPatronymic(patronymic);
}

string Person::GetName()
{
	return _name;
}

void Person::SetName(string name)
{
	_name = name;
}

string Person::GetSurname()
{
	return _surname;
}

void Person::SetSurname(string surname)
{
	_surname = surname;
}

string Person::GetPatronymic()
{
	return _patronymic;
}

void Person::SetPatronymic(string patronymic)
{
	_patronymic = patronymic;
}
