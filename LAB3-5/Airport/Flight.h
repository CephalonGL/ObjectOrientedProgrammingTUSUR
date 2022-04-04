#pragma once

// TODO: а вас на СД не заставляли комментировать код?
class Flight
{
private:

	int _number;

	// TODO: откуда слово Point? У слова destination его нет, и это правильно
	string _departurePoint;

	Time _departureTime;

	string _destination;

	Time _destinationTime;

public:

	Flight();
	// TODO: в локальных переменных тоже исправить именование
	Flight(int number,
		   string departurePoint,
		   Time departureTime,
		   string destination,
		   Time destinationTime);

	int GetNumber();
	void SetNumber(int number);

    // TODO: именование
	string GetDeparturePoint();
	// TODO: именование
	void SetDeparturePoint(string departurePoint);

	Time GetDepartureTime();
	void SetDepartureTime(Time departureTime);

	string GetDestination();
	void SetDestination(string destination);

	Time GetDestinationTime();
	void SetDestinationTime(Time destinationTime);

	// TODO: этот метод относиться к клиентскому коду, и не должен быть частью класса
	static void DemoFlightWithTime();

	Time GetFlightTime();
};

