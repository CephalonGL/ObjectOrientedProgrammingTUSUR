#include "../stdafx.h"
#include "../University/PersonProgram.h"

void PersonProgram::DemoName(Person* person)
{
	cout << "Person's name: " << person->GetName() << " " 
		<< person->GetSurname() << " " << person->GetPatronymic() << endl;
}
