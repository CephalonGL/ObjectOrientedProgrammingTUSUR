#include "stdafx.h"
#include "ProgramFlight.h"

void FlightProgram::DemoFlightWithTime()
{
	// TODO: при работе с вектором можно было добавлять элементы через конструктор класса. +
	// Вызов отдельных сеттеров - это проблема статических массивов объектов
	vector<Flight> flights
	{
		Flight(0, "Krasnodar", Time(2022, 1, 20, 12, 00),
		"Tomsk", Time(2022, 1, 20, 16, 00)),

		Flight(1,"Tomsk", Time(2022, 1, 20, 12, 00),
		"Tomsk", Time(2022, 1, 20, 16, 00)),

		Flight(2,"Novosibirsk", Time(2022, 4, 10, 10, 00),
		"Yaroslavl", Time(2022, 4, 10, 14, 00)),

		Flight(3,"Moscow", Time(2022, 10, 4, 13, 00),
		"Novosibirsk", Time(2022, 10, 4, 17, 00)),

		Flight(4,"Yaroslavl", Time(2022, 4, 24, 14, 00),
		"Novosibirsk", Time(2022, 4, 24, 18, 00))
	};
	const int FLIGHTS_COUNT = 5;

	for (int i = 0; i < FLIGHTS_COUNT; i++)
	{
		cout << flights[i].GetNumber() << " "
			<< flights[i].GetDeparture() << " - "
			<< flights[i].GetDestination();
		// TODO: формирование строки с текущей датой и текущим временем тоже стоит вынести в класс Time GetFormattedDate() и GetFormattedTime() +
		cout << "Departure: "
			<< flights[i].GetDepartureTime().GetFormattedDate() << " "
			<< flights[i].GetDepartureTime().GetFormattedTime();

		cout << "Destination: "
			<< flights[i].GetDestinationTime().GetFormattedDate() << " "
			<< flights[i].GetDestinationTime().GetFormattedTime();

		cout << "Flight time: "
			<< flights[i].GetFlightTime().GetFormattedDate()
			<< endl;
	}
}
