#include "DemoStructs.h"

void DemoRectangle()
{
	Rectangle rectangle;
	rectangle.Color = "Black";
	rectangle.Length = 50;
	rectangle.Width = 50;

	cout << "DemoRectangle" << endl << endl;
	cout << "\tColor: " << rectangle.Color << endl;
	cout << "\tLength: " << rectangle.Length << endl;
	cout << "\tWidth: " << rectangle.Width << endl << endl;
}

void DemoFlight()
{
	Flight flight;
	flight.DeparturePoint = "Novosibirsk, Tolmachevo";
	flight.DestinationPoint = "Krasnodar, Pashkovsky";
	flight.FlightDurationMinutes = 240;

	cout << "DemoFlight" << endl << endl;
	cout << "\tDeparture point: " << flight.DeparturePoint << '.' << endl;
	cout << "\tDestination point: " << flight.DestinationPoint
		<< '.' << endl;
	cout << "\tFlight duration: " << flight.DestinationPoint
		<< " minutes." << endl << endl;
}

void DemoMovie()
{
	Movie movie;
	movie.DurationMinutes = 140;
	movie.Genre = "fantasy, action, adventure";
	movie.Name = "Star Wars: Episode III – Revenge of the Sith";
	movie.Rating = 8.1f;
	movie.ReleaseYear = 2005;

	cout << "DemoMovie" << endl << endl;
	cout << "\tDuration in minutes: " << movie.DurationMinutes << endl;
	cout << "\tGenre: " << movie.Genre << endl;
	cout << "\tName: " << movie.Name << endl;
	cout << "\tRating: " << movie.Rating << endl;
	cout << "\tRelease year: " << movie.ReleaseYear << endl << endl;
}

void DemoTime()
{
	Time time;
	time.Hours = 12;
	time.Minutes = 34;
	time.Seconds = 56;
	cout << "DemoTime" << endl << endl;
	cout << "\tTime is: " << time.Hours << " hours " << time.Minutes
		<< " minutes " << time.Seconds << " seconds." << endl;
}

void DemoStructs()
{
	DemoRectangle();
	DemoFlight();
	DemoMovie();
	DemoTime();
}