#include "stdafx.h"

void ShowPerson::DemoName(Person* person)
{
	cout << "Person's name: " << person->GetName() << " " 
		<< person->GetSurname() << " " << person->GetPatronymic() << endl;
}
