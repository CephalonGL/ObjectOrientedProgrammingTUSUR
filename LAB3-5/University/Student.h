#pragma once
#include "../University/Person.h"

/// <summary>
/// Student of university
/// </summary>
class Student :
	public Person
{
private:

	/// <summary>
	/// Credit book ID
	/// </summary>
	int _creditBookID;

	/// <summary>
	/// Admission year
	/// </summary>
	int _admissionYear;

public:

	/// <summary>
	/// Creates new student and fills all fields
	/// </summary>
	/// <param name="name">Name</param>
	/// <param name="surname">Surname</param>
	/// <param name="patronymic">Patronymic</param>
	/// <param name="creditBookID">Credit book ID</param>
	/// <param name="admissionYear">Admission year</param>
	Student(string name,
			string surname,
			string patronymic,
			int creditBookID,
			int admissionYear);

	/// <summary>
	/// Getter function for credit book ID
	/// </summary>
	/// <returns>Credit book ID</returns>
	int GetCreditBookID();

	/// <summary>
	/// Setter function for credit book ID
	/// </summary>
	/// <param name="creditBookID">Credit book ID</param>
	void SetCreditBookID(int creditBookID);

	/// <summary>
	/// Getter function for admission year
	/// </summary>
	/// <returns>Admission year</returns>
	int GetAdmissionYear();

	/// <summary>
	/// Setter function for admission year
	/// </summary>
	/// <param name="admissionYear">Admission year</param>
	void SetAdmissionYear(int admissionYear);
};

