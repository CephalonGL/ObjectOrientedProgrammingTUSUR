#pragma once

class Person
{
private:
	string _name;
	
	string _surname;
	
	string _patronymic;

public:
	Person(string name,
		   string surname,
		   string patronymic);

	string GetName();
	void SetName(string name);

	string GetSurname();
	void SetSurname(string surname);

	string GetPatronymic();
	void SetPatronymic(string patronymic);
};

