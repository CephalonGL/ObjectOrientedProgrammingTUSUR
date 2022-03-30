#pragma once

class Student :
	public Person
{
private:
	int _creditBookID;

	int _admissionYear;

public:
	Student(string name,
			string surname,
			string patronymic,
			int creditBookID,
			int admissionYear);

	int GetCreditBookID();
	void SetCreditBookID(int creditBookID);

	int GetAdmissionYear();
	void SetAdmissionYear(int admissionYear);
};

