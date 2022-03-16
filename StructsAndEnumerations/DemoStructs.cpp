#include "DemoStructs.h"

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
					Console::ReadUnsignedInt("Enter length: "),
					Console::ReadUnsignedInt("Enter width: "),
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

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
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

void FindRectangle(Rectangle* rectangles, int count)
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

}
