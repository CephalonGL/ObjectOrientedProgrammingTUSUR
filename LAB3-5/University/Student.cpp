#include "../stdafx.h"
#include "../University/Student.h"

Student::Student(string name, 
				 string surname, 
				 string patronymic, 
				 int creditBookID, 
				 int admissionYear) 
	: Person(name, surname, patronymic)
{
	SetCreditBookID(creditBookID);
	SetAdmissionYear(admissionYear);
}

int Student::GetCreditBookID()
{
    return _creditBookID;
}

void Student::SetCreditBookID(int creditBookID)
{
	if (creditBookID < 0)
	{
		throw exception("Error: ID must be more or equal to 0,"
						" but it is less than 0.");
	}
    _creditBookID = creditBookID;
}

int Student::GetAdmissionYear()
{
	return _admissionYear;
}

void Student::SetAdmissionYear(int admissionYear)
{
	if (admissionYear < 0)
	{
		throw exception("Error: admission year must be more or equal to 0,"
						" but it is less than 0.");
	}
	_admissionYear = admissionYear;
}
