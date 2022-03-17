#pragma once
#include "Structs.h"

void DemoRectangle(float Length = 50,
				   float Width = 50,
				   string Color = "Black");

void DemoFlight(string DeparturePoint = "Novosibirsk, Tolmachevo",
				string DestinationPoint = "Krasnodar, Pashkovsky",
				unsigned int FlightDurationMinutes = 240);

void DemoMovie(string Name = "Star Wars: Episode III – "
			   "Revenge of the Sith",
			   unsigned int DurationMinutes = 140,
			   unsigned int ReleaseYear = 2005,
			   string Genre = "fantasy, action, adventure",
			   float Rating = 8.1f);

void DemoTime(unsigned int Hours = 12,
			  unsigned int Minutes = 34,
			  unsigned int Seconds = 56);

void DemoStructs();

void WrongPointers();

void WriteRectangle(Rectangle& rectangle);

void ReadRectangle(Rectangle& rectangle);

void DemoReadAndWriteRectangles();

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

void FindRectangle(Rectangle* rectangles, int count);

void DemoDynamicFlight();

void FindShortestFlight(Flight* flights, int count);