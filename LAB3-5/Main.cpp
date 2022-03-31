#include "stdafx.h"

int main()
{
	//Lab 3-4:
	DemoBook();
	Flight::DemoFlightWithTime();
	Band::DemoBand();
	GeometricProgram::DemoRectangleWithPoint();
	GeometricProgram::DemoRing();
	GeometricProgram::DemoCollision();

	//Lab 5:
	Person person = Person("Ivan", "Ivanov", "Ivanovich");
	Student student = Student("Ivan", "Ivanov", "Ivanovich", 1, 2022);
	Teacher teacher = Teacher("Ivan", "Ivanov", "Ivanovich", Dean);
	
	ShowPerson::DemoName(&person);
	ShowPerson::DemoName(&student);
	ShowPerson::DemoName(&teacher);

	UserInterface::DemoUsers();
	return 0;
}