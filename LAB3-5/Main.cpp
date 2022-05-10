#include "stdafx.h"
#include "Book.h"
#include "Route.h"
#include "ProgramFlight.h"
#include "ProgramDiscount.h"
#include "ProgramBand.h"
#include "Users/UserProgram.h"
#include "University/PersonProgram.h"
#include "Geometry/GeometricProgram.h"

int main()
{
	//Lab 3-4:
	DemoBook();
	FlightProgram::DemoFlightWithTime();
	BandProgram::DemoBand();
	GeometricProgram::DemoRectangleWithPoint();
	GeometricProgram::DemoRing();
	GeometricProgram::DemoCollision();
	
	//Lab 5:
	Person person = Person("Ivan", "Ivanov", "Ivanovich");
	Student student = Student("Dmitry", "Dmitriev", "Dmitrievich", 
							  1, 2022);
	Teacher teacher = Teacher("Anton", "Antonov", "Antonovich", Dean);
	
	PersonProgram::DemoName(&person);
	PersonProgram::DemoName(&student);
	PersonProgram::DemoName(&teacher);
	
	UserProgram::DemoUsers();

	DiscountProgram::DemoDiscount();
	return 0;
}