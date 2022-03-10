#include <iostream>
#include <exception>
#include "Structs.h"

using namespace std;

/// <summary>
/// Sort array of double
/// </summary>
/// <param name="values">Array of double</param>
/// <param name="count">Count of elements</param>
void Sort(double* values, int count);

/// <summary>
/// Show the result of sorting
/// </summary>
/// <param name="arrayUnit">Array</param>
/// <param name="count">Count of elements</param>
void DemoSort(double arrayUnit[], int count);

void DemoExceptions();

void DemoRectangle();

void DemoFlight();

void DemoMovie();

void DemoTime();

void DemoStructs();

int main()
{
	cout << "\tLab1. Structs and enumerations." << endl;
	cout << "DemoExceptions" << endl;
	DemoExceptions();
	cout << endl << "DemoStructs" << endl << endl;
	DemoStructs();
	return 0;
}

void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw exception("Fatality. Count < 0.");
	}
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}

	}
}

void DemoSort(double arrayUnit[], int count)
{
	cout << endl << "-------------------------------------" << endl;
	try
	{
		Sort(arrayUnit, count);
	}
	catch (const exception& error)
	{
		cout << "Exception catched!" << endl;
		cout << "Error: " << error.what() << endl;
		return;
	}
	cout << "Sort successful! Count = " << count << '.' << endl;
	for (size_t i = 0; i < count; i++)
	{
		cout << arrayUnit[i] << '\t';
	}
}

void DemoExceptions()
{
	int countArrayElements = 5;

	double* valuesFirst =
		new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesFirst, 5);

	double* valuesSecond =
		new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesSecond, -1);

	double* valuesThird =
		new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesThird, 0);

	delete[] valuesFirst;
	delete[] valuesSecond;
	delete[] valuesThird;
}

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
