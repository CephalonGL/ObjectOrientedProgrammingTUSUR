#include "Flight.h"

Flight::Flight()
{
}

Flight::Flight(int number, string departurePoint, Time departureTime, string destination, Time destinationTime)
{
	SetNumber(number);
	SetDeparturePoint(departurePoint);
	SetDepartureTime(departureTime);
	SetDestination(destination);
	SetDestinationTime(destinationTime);
}

int Flight::GetNumber()
{
	return _number;
}

void Flight::SetNumber(int number)
{
	if (number >= 0)
	{
		this->_number = number;
	}
	else
	{
		throw exception("Error: number is out of range");
	}
}

string Flight::GetDeparturePoint()
{
	return _departurePoint;
}

void Flight::SetDeparturePoint(string departurePoint)
{
	this->_departurePoint = departurePoint;
}

Time Flight::GetDepartureTime()
{
	return _departureTime;
}

void Flight::SetDepartureTime(Time departureTime)
{
	this->_departureTime = departureTime;
}

string Flight::GetDestination()
{
	return _destination;
}

void Flight::SetDestination(string destination)
{
	this->_destination = destination;
}

Time Flight::GetDestinationTime()
{
	return _destinationTime;
}

void Flight::SetDestinationTime(Time destinationTime)
{
	if (GetDepartureTime().GetYear() == 0
		&& GetDepartureTime().GetMonth() == 0
		&& GetDepartureTime().GetDay() == 0
		&& GetDepartureTime().GetHour() == 0
		&& GetDepartureTime().GetMinute() == 0)
	{
		throw exception("Error: define departure time at first.");
	}
	else
	{
		if (GetDepartureTime().GetYear() >
			destinationTime.GetYear()

			|| (GetDepartureTime().GetYear() <=
				destinationTime.GetYear()
				&& GetDepartureTime().GetMonth() >
				destinationTime.GetMonth())

			|| (GetDepartureTime().GetYear() <=
				destinationTime.GetYear()
				&& GetDepartureTime().GetMonth() <=
				destinationTime.GetMonth()
				&& GetDepartureTime().GetDay() >
				destinationTime.GetDay())

			|| (GetDepartureTime().GetYear() <=
				destinationTime.GetYear()
				&& GetDepartureTime().GetMonth() <=
				destinationTime.GetMonth()
				&& GetDepartureTime().GetDay() <=
				destinationTime.GetDay()
				&& GetDepartureTime().GetHour() >
				destinationTime.GetHour())

			|| (GetDepartureTime().GetYear() <=
				destinationTime.GetYear()
				&& GetDepartureTime().GetMonth() <=
				destinationTime.GetMonth()
				&& GetDepartureTime().GetDay() <=
				destinationTime.GetDay()
				&& GetDepartureTime().GetHour() <=
				destinationTime.GetHour()
				&& GetDepartureTime().GetMinute() >
				destinationTime.GetMinute()))
		{
			throw exception("Error: Time travel is not allowed."
							" destination time can not be before"
							" departure time.");
		}
		else
		{
			this->_destinationTime = destinationTime;
		}
	}
}

void Flight::DemoFlightWithTime()
{
	vector<Flight> flights;
	const int FLIGHTS_COUNT = 5;

	flights[0].SetNumber(0);
	flights[0].SetDeparturePoint("Krasnodar");
	flights[0].SetDepartureTime(Time(2022, 1, 20, 12, 00));
	flights[0].SetDestination("Tomsk");
	flights[0].SetDestinationTime(Time(2022, 1, 20, 16, 00));

	flights[1].SetNumber(1);
	flights[1].SetDeparturePoint("Tomsk");
	flights[1].SetDepartureTime(Time(2022, 3, 13, 10, 30));
	flights[1].SetDestination("Krasnodar");
	flights[1].SetDestinationTime(Time(2022, 3, 13, 14, 30));

	flights[2].SetNumber(2);
	flights[2].SetDeparturePoint("Novosibirsk");
	flights[2].SetDepartureTime(Time(2022, 4, 10, 10, 00));
	flights[2].SetDestination("Yaroslavl");
	flights[2].SetDestinationTime(Time(2022, 4, 10, 14, 00));

	flights[3].SetNumber(3);
	flights[3].SetDeparturePoint("Moscow");
	flights[3].SetDepartureTime(Time(2022, 10, 4, 13, 00));
	flights[3].SetDestination("Novosibirsk");
	flights[3].SetDestinationTime(Time(2022, 10, 4, 17, 00));

	flights[4].SetNumber(4);
	flights[4].SetDeparturePoint("Yaroslavl");
	flights[4].SetDepartureTime(Time(2022, 4, 24, 14, 00));
	flights[4].SetDestination("Novosibirsk");
	flights[4].SetDestinationTime(Time(2022, 4, 24, 18, 00));

	for (int i = 0; i < FLIGHTS_COUNT; i++)
	{
		cout << flights[i].GetNumber() << " "
			<< flights[i].GetDeparturePoint() << " - "
			<< flights[i].GetDestination()
			<< "Departure: ";
		if (flights[i].GetDepartureTime().GetDay() < 10)
		{
			cout << "0" << flights[i].GetDepartureTime().GetDay()
				<< ".";
		}
		if (flights[i].GetDepartureTime().GetMonth() < 10)
		{
			cout << "0" << flights[i].GetDepartureTime().GetMonth() << " ";
		}
		cout << flights[i].GetDepartureTime().GetHour() << ":"
			<< flights[i].GetDepartureTime().GetMinute() << " ";
		cout << "Destination: ";
		if (flights[i].GetDestinationTime().GetDay() < 10)
		{
			cout << "0" << flights[i].GetDestinationTime().GetDay()
				<< ".";
		}
		if (flights[i].GetDestinationTime().GetMonth() < 10)
		{
			cout << "0" << flights[i].GetDestinationTime().GetMonth() << " ";
		}
		cout << flights[i].GetDestinationTime().GetHour() << ":"
			<< flights[i].GetDestinationTime().GetMinute() << endl;
		cout << "Flight time: " << flights[i].GetFlightTime().GetHour()
			<< " h " << flights[i].GetFlightTime().GetMinute()
			<<" min" << endl;

	}
}

Time Flight::GetFlightTime()
{
	const int COUNT_HOURS_IN_DAY = 24;
	const int COUNT_MINUTES_IN_HOUR = 60;
	int departureTimeMinutes =
		this->GetDepartureTime().GetHour() * COUNT_MINUTES_IN_HOUR
		+ this->GetDepartureTime().GetMinute();
	int destinationTimeMinutes =
		this->GetDestinationTime().GetHour() * COUNT_MINUTES_IN_HOUR
		+ this->GetDestinationTime().GetMinute();
	if (this->GetDestinationTime().GetDay()
		- this->GetDepartureTime().GetDay() == 1)
	{
		destinationTimeMinutes += 
			COUNT_HOURS_IN_DAY * COUNT_MINUTES_IN_HOUR;
	}
	int flightTimeMinutes = destinationTimeMinutes - departureTimeMinutes;
	Time flightTime;
	while (flightTimeMinutes >= COUNT_MINUTES_IN_HOUR)
	{
		flightTime.SetHour(flightTime.GetHour() + 1);
		flightTimeMinutes -= COUNT_MINUTES_IN_HOUR;
	}
	flightTime.SetMinute(flightTimeMinutes);
	return flightTime;
}
