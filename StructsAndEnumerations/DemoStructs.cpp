#include "DemoStructs.h"
#include "..\Console\Console.h"
#include "..\Console\Console.cpp"

void DemoRectangle(float Length,
				   float Width,
				   string Color)
{
	Rectangle rectangle;
	Rectangle* firstRectanglePointer = &rectangle;

	firstRectanglePointer->Length = Length;
	firstRectanglePointer->Width = Width;
	firstRectanglePointer->Color = Color;


	Rectangle* secondRectanglePointer = &rectangle;

	cout << "DemoRectangle" << endl << endl;
	cout << "\tColor: " << firstRectanglePointer->Color << endl;
	cout << "\tLength: " << firstRectanglePointer->Length << endl;
	cout << "\tWidth: " << firstRectanglePointer->Width << endl;
	cout << "First adress: " << firstRectanglePointer << endl;
	cout << "Second adress: " << secondRectanglePointer << endl << endl;
}

void DemoFlight(string DeparturePoint,
				string DestinationPoint,
				unsigned int FlightDurationMinutes)
{
	Flight flight;
	flight.DeparturePoint = DeparturePoint;
	flight.DestinationPoint = DestinationPoint;
	flight.FlightDurationMinutes = FlightDurationMinutes;

	cout << "DemoFlight" << endl << endl;
	cout << "\tDeparture point: " << flight.DeparturePoint << '.' << endl;
	cout << "\tDestination point: " << flight.DestinationPoint
		<< '.' << endl;
	cout << "\tFlight duration: " << flight.DestinationPoint
		<< " minutes." << endl << endl;
}

void DemoMovie(string Name,
			   unsigned int DurationMinutes,
			   unsigned int ReleaseYear,
			   string Genre,
			   float Rating)
{
	Movie movie;
	movie.Name = Name;
	movie.DurationMinutes = DurationMinutes;
	movie.ReleaseYear = ReleaseYear;
	movie.Genre = Genre;
	movie.Rating = Rating;

	cout << "DemoMovie" << endl << endl;
	cout << "\tDuration in minutes: " << movie.DurationMinutes << endl;
	cout << "\tGenre: " << movie.Genre << endl;
	cout << "\tName: " << movie.Name << endl;
	cout << "\tRating: " << movie.Rating << endl;
	cout << "\tRelease year: " << movie.ReleaseYear << endl << endl;
}

void DemoTime(unsigned int Hours,
			  unsigned int Minutes,
			  unsigned int Seconds)
{
	Time time;
	time.Hours = Hours;
	time.Minutes = Minutes;
	time.Seconds = Seconds;
	cout << "DemoTime" << endl << endl;
	cout << "\tTime is: " << time.Hours << " hours " << time.Minutes
		<< " minutes " << time.Seconds << " seconds." << endl;
}

void DemoStructs()
{
	Console::Print("Would you insert fields by yourself?\n");
	Console::Print("1 - yes;\n");
	Console::Print("0 - no.\n");
	Console::Print("100 - exit.\n");
	/// <summary>
	/// Enumeration for user commands.
	/// </summary>
	enum Choose
	{
		No,
		Yes,
		Exit = 100
	};
	int command = Yes;
	while (command != Exit)
	{
		command = Console::ReadInt("Enter command: ");
		switch (command)
		{
			case Yes:
			{
				DemoRectangle(
					Console::ReadFloat("Enter length: "),
					Console::ReadFloat("Enter width: "),
					Console::ReadString("Enter color: "));
				DemoFlight(
					Console::ReadString("Enter departure point: "),
					Console::ReadString("Enter destination point: "),
					Console::ReadUnsignedInt("Enter flight duration: "));
				DemoMovie(
					Console::ReadString("Enter name: "),
					Console::ReadUnsignedInt("Enter duration in"
											 " minutes: "),
					Console::ReadUnsignedInt("Enter release year: "),
					Console::ReadString("Enter genre: "),
					Console::ReadFloat("Enter rating: "));
				DemoTime(
					Console::ReadUnsignedInt("Enter hours: "),
					Console::ReadUnsignedInt("Enter minutes: "),
					Console::ReadUnsignedInt("Enter seconds: "));
				break;
			}
			case No:
			{
				DemoRectangle();
				DemoFlight();
				DemoMovie();
				DemoTime();
				break;
			}
			case Exit:
			{
				command = Exit;
				break;
			}
			default:
			{
				Console::Print("Error: unknown command."
							   " Repeat, please.\n");
				break;
			}
		}
	}
	DemoRectangle(30, 20, "Orange");
	DemoRectangle(10, 40, "Yellow");
	DemoRectangle(55, 15, "Red");

	DemoFlight("Moscow", "Novosibirsk", 230);
	DemoFlight("Tomsk", "Novosibirsk", 50);
	DemoFlight("Krasnoyarsk", "Novosibirsk", 100);

	DemoMovie("1+1", 112, 2011, "drama, comedy, biography", 8.8f);
	DemoMovie("Brothers", 105, 2009, "drama, military", 7.1f);
	DemoMovie("Thor", 115, 2011, "fantasy, action, adventure", 8.8f);

	DemoTime(13, 22, 02);
	DemoTime(15, 06, 12);
	DemoTime(07, 21, 33);

	DemoReadAndWriteRectangles();
}

void WrongPointers()
{
	Flight flight;
	Flight* flightPointer = &flight;
	//Flight* flightPointer = &movie;
	Movie movie;
	Movie* moviePointer = &movie;
	//Movie* moviePointer = &flight;
}

void WriteRectangle(Rectangle& rectangle)
{
	cout << "Rectangle state" << endl;
	cout << "Color: " << rectangle.Color << endl;
	cout << "Length: " << rectangle.Length << endl;
	cout << "Width" << rectangle.Width << endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << "Enter color: ";
	cin >> rectangle.Color;
	cout << "\nEnter length: ";
	cin >> rectangle.Length;
	cout << "\nEnter width: ";
	cin >> rectangle.Width;
}

void DemoReadAndWriteRectangles()
{
	const int ARRAY_SIZE = 5;
	Rectangle rectanglesArray[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		ReadRectangle(rectanglesArray[i]);
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		WriteRectangle(rectanglesArray[i]);
	}
}

void Exchange(Rectangle& rectangle1,
			  Rectangle& rectangle2)
{
	Rectangle tmp;
	tmp.Color = rectangle1.Color;
	tmp.Length = rectangle1.Length;
	tmp.Width = rectangle1.Width;

	rectangle1.Color = rectangle2.Color;
	rectangle1.Length = rectangle2.Length;
	rectangle1.Width = rectangle2.Width;

	rectangle2.Color = tmp.Color;
	rectangle2.Length = tmp.Length;
	rectangle2.Width = tmp.Width;
}

void FindRectangle(Rectangle* rectangles,
				   int count)
{
	Rectangle& maxLengthRectangle = *rectangles;
	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > maxLengthRectangle.Length)
		{
			maxLengthRectangle = rectangles[i];
		}
	}
	cout << "Rectangle with max length has dimensions "
		<< maxLengthRectangle.Length << "x"
		<< maxLengthRectangle.Width << ".\n";
}

void DemoDynamicFlight()
{
		const int COUNT_OF_FLIGHTS = 4;
		Flight* flights = new Flight[COUNT_OF_FLIGHTS];
		flights[0].DeparturePoint = "Moscow";
		flights[0].DestinationPoint = "Novosibirsk";
		flights[0].FlightDurationMinutes = 230;
		cout << "Deprture point: " << flights[0].DeparturePoint;
		cout << "\nDestination point: " << flights[0].DestinationPoint;
		cout << "\nFlight duration, minutes: "
			<< flights[0].FlightDurationMinutes << endl;
	
		flights[1].DeparturePoint = "Tomsk";
		flights[1].DestinationPoint = "Novosibirsk";
		flights[1].FlightDurationMinutes = 50;
		cout << "Deprture point: " << flights[1].DeparturePoint;
		cout << "\nDestination point: " << flights[1].DestinationPoint;
		cout << "\nFlight duration, minutes: "
			<< flights[1].FlightDurationMinutes << endl;
	
		flights[2].DeparturePoint = "Krasnoyarsk";
		flights[2].DestinationPoint = "Novosibirsk";
		flights[2].FlightDurationMinutes = 100;
		cout << "Deprture point: " << flights[2].DeparturePoint;
		cout << "\nDestination point: " << flights[2].DestinationPoint;
		cout << "\nFlight duration, minutes: "
			<< flights[2].FlightDurationMinutes << endl;
	
		flights[3].DeparturePoint = "Novosibirsk";
		flights[3].DestinationPoint = "Krasnodar";
		flights[3].FlightDurationMinutes = 240;
		cout << "Deprture point: " << flights[3].DeparturePoint;
		cout << "\nDestination point: " << flights[3].DestinationPoint;
		cout << "\nFlight duration, minutes: "
			<< flights[3].FlightDurationMinutes << endl;

		FindShortestFlight(flights, COUNT_OF_FLIGHTS);

		delete[] flights;
}

void FindShortestFlight(Flight* flights,
						int count)
{
	Flight shortestFlight;
	shortestFlight.FlightDurationMinutes = 9999999U;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightDurationMinutes 
			< shortestFlight.FlightDurationMinutes)
		{
			shortestFlight.DeparturePoint = flights[i].DeparturePoint;
			shortestFlight.DestinationPoint = flights[i].DestinationPoint;
			shortestFlight.FlightDurationMinutes = 
				flights[i].FlightDurationMinutes;
		}
	}
	cout << "Departure point: " << shortestFlight.DeparturePoint << endl;
	cout << "Destination point: " 
		<< shortestFlight.DestinationPoint << endl;
	cout << "Flight duration, minutes: " 
		<< shortestFlight.FlightDurationMinutes << endl;
}

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, 12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
}

Circle* MakeCircle(double x,
				   double y,
				   double radius,
				   string color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle& circleToCopy)
{
	Circle* newCircle = new Circle;
	newCircle->X = circleToCopy.X;
	newCircle->Y = circleToCopy.Y;
	newCircle->Radius = circleToCopy.Radius;
	newCircle->Color = circleToCopy.Color;
	return newCircle;
}

Rectangle* Makerectangle(float length, 
						 float width, 
						 string color)
{
	Rectangle* newRectangle = new Rectangle;
	newRectangle->Length = length;
	newRectangle->Width = width;
	newRectangle->Color = color;
	return newRectangle;
}

Rectangle* CopyRectangle(Rectangle& rectangleToCopy)
{
	Rectangle* newRectangle = new Rectangle;
	newRectangle->Length = rectangleToCopy.Length;
	newRectangle->Width = rectangleToCopy.Width;
	newRectangle->Color = rectangleToCopy.Color;
	return newRectangle;
}

Flight* MakeFlight(string departurePoint,
				   string destinationPoint, 
				   unsigned int flightDurationMinutes)
{
	Flight* newFlight = new Flight;
	newFlight->DeparturePoint = departurePoint;
	newFlight->DestinationPoint = destinationPoint;
	newFlight->FlightDurationMinutes = flightDurationMinutes;
	return newFlight;
}

Flight* CopyFlight(Flight& flightToCopy)
{
	Flight* newFlight = new Flight;
	newFlight->DeparturePoint = flightToCopy.DeparturePoint;
	newFlight->DestinationPoint = flightToCopy.DestinationPoint;
	newFlight->FlightDurationMinutes = flightToCopy.FlightDurationMinutes;
	return newFlight;
}

Movie* MakeMovie(string name, 
				 unsigned int durationMinutes, 
				 unsigned int releaseYear, 
				 string genre, 
				 float rating)
{
	Movie* newMovie = new Movie;
	newMovie->Name = name;
	newMovie->DurationMinutes = durationMinutes;
	newMovie->ReleaseYear = releaseYear;
	newMovie->Genre = genre;
	newMovie->Rating = rating;
	return newMovie;
}

Movie* CopyMovie(Movie& movieToCopy)
{
	Movie* newMovie = new Movie;
	newMovie->Name = movieToCopy.Name;
	newMovie->DurationMinutes = movieToCopy.DurationMinutes;
	newMovie->ReleaseYear = movieToCopy.ReleaseYear;
	newMovie->Genre = movieToCopy.Genre;
	newMovie->Rating = movieToCopy.Rating;
	return newMovie;
}

Time* MakeTime(unsigned int hours, 
			   unsigned int minutes, 
			   unsigned int seconds)
{
	Time* newTime = new Time;
	newTime->Hours = hours;
	newTime->Minutes = minutes;
	newTime->Seconds = seconds;
	return newTime;
}

Time* CopyTime(Time& timeToCopy)
{
	Time* newTime = new Time;
	newTime->Hours = timeToCopy.Hours;
	newTime->Minutes = timeToCopy.Minutes;
	newTime->Seconds = timeToCopy.Seconds;
	return newTime;
}
