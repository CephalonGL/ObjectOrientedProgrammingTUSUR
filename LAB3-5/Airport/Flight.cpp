#include "..\stdafx.h"

Flight::Flight()
{
}

// TODO: именование +
Flight::Flight(int number,
			   string departurePoint,
			   Time departureTime,
			   string destination,
			   Time destinationTime)
{
	SetNumber(number);
	SetDeparture(departurePoint);
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
		_number = number;
	}
	else
	{
		// TODO: а какой range? Сообщение мало информативно.+
		// Надо по шаблону "Значение должно быть ..., а было ..."
		throw exception("Error: number but must be more or equal"
						" to 0, but it is less than 0.");
	}
}

string Flight::GetDeparture()
{
	return _departure;
}

void Flight::SetDeparture(string departurePoint)
{
	this->_departure = departurePoint;
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
	// TODO: сравнение времени с 0 вынести в метод класса Time +
	if (GetDepartureTime().IsNull())
	{
		throw exception("Error: define departure time at first.");
	}
	else
	{
		// TODO: сравнение двух объектов Time вынести в класс Time. Желательно в виде перегрузки оператора +
		if (GetDepartureTime() == destinationTime)
		{
			throw exception("Error: time travel is not allowed."
							" destination time can not be before"
							" departure time.");
		}
		else
		{
			_destinationTime = destinationTime;
		}
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
