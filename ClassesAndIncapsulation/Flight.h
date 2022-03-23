#pragma once
#include "Includes.h"
#include "Time.h"

class Flight
{
private:

	int _number;

	string _departurePoint;

	Time _departureTime;

	string _destination;

	Time _destinationTime;

public:

	Flight();
	Flight(int number,
		   string departurePoint,
		   Time departureTime,
		   string destination,
		   Time destinationTime);

	int GetNumber();
	void SetNumber(int number);

	string GetDeparturePoint();
	void SetDeparturePoint(string departurePoint);

	Time GetDepartureTime();
	void SetDepartureTime(Time departureTime);

	string GetDestination();
	void SetDestination(string destination);

	Time GetDestinationTime();
	void SetDestinationTime(Time destinationTime);

	static void DemoFlightWithTime();

	Time GetFlightTime();
};

