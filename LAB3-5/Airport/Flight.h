#pragma once

// TODO: а вас на СД не заставляли комментировать код?
class Flight
{
private:

	int _number;

	// TODO: откуда слово Point? У слова destination его нет, и это правильно +
	string _departure;

	Time _departureTime;

	string _destination;

	Time _destinationTime;

public:

	Flight();
	// TODO: в локальных переменных тоже исправить именование +
	Flight(int number,
		   string departure,
		   Time departureTime,
		   string destination,
		   Time destinationTime);

	int GetNumber();
	void SetNumber(int number);

    // TODO: именование +
	string GetDeparture();
	// TODO: именование +
	void SetDeparturePoint(string departure);

	Time GetDepartureTime();
	void SetDepartureTime(Time departureTime);

	string GetDestination();
	void SetDestination(string destination);

	Time GetDestinationTime();
	void SetDestinationTime(Time destinationTime);

	

	Time GetFlightTime();
};

