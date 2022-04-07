#pragma once
#include "Structs.h"

/// <summary>
/// Demonstrate work of Rectangle class
/// </summary>
/// <param name="Length">Length of rectangle</param>
/// <param name="Width">WIdth of rectanlge</param>
/// <param name="Color">Color of rectangle</param>
void DemoRectangle(float Length = 50,
				   float Width = 50,
				   string Color = "Black");

/// <summary>
/// Demonstrate work of Flight class
/// </summary>
/// <param name="DeparturePoint">Departure point of flight</param>
/// <param name="DestinationPoint">Destination point of flight</param>
/// <param name="FlightDurationMinutes">Duration of 
/// flight in minutes</param>
void DemoFlight(string DeparturePoint = "Novosibirsk, Tolmachevo",
				string DestinationPoint = "Krasnodar, Pashkovsky",
				unsigned int FlightDurationMinutes = 240);

/// <summary>
/// Demonstrate work of Movie class
/// </summary>
/// <param name="Name">Name of movie</param>
/// <param name="DurationMinutes">Duration time in minutes of movie</param>
/// <param name="ReleaseYear">Release year of movie</param>
/// <param name="Genre">Movie genre</param>
/// <param name="Rating">Movie rating</param>
void DemoMovie(string Name = "Star Wars: Episode III – "
			   "Revenge of the Sith",
			   unsigned int DurationMinutes = 140,
			   unsigned int ReleaseYear = 2005,
			   Genre Genre = Action,
			   float Rating = 8.1f);

/// <summary>
/// Demonstrate work of Time class
/// </summary>
/// <param name="Hours">Count of hours</param>
/// <param name="Minutes">Count of minutes</param>
/// <param name="Seconds">Count of seconds</param>
void DemoTime(unsigned int Hours = 12,
			  unsigned int Minutes = 34,
			  unsigned int Seconds = 56);

/// <summary>
/// Demonstrate work of all structs
/// </summary>
void DemoStructs();

/// <summary>
/// Show impossibility of assemble while programmer try to assign to
/// pointer adress of wrong class
/// </summary>
void WrongPointers();

/// <summary>
/// Print state of rectangle to console
/// </summary>
/// <param name="rectangle">Rectangle to get state</param>
void WriteRectangle(Rectangle& rectangle);

/// <summary>
/// Set state of rectangle from console
/// </summary>
/// <param name="rectangle">Rectangle to set state</param>
void ReadRectangle(Rectangle& rectangle);

/// <summary>
/// Demonstrate work of ReadRectangle() and WriteRectangle() functions
/// </summary>
void DemoReadAndWriteRectangles();

/// <summary>
/// Swap states of two rectangles
/// </summary>
/// <param name="rectangle1">First rectangle</param>
/// <param name="rectangle2">Second rectangle</param>
void Exchange(Rectangle& rectangle1,
			  Rectangle& rectangle2);

/// <summary>
/// Find and print to console rectangle with max length
/// </summary>
/// <param name="rectangles">Array of rectangles</param>
/// <param name="count">Count of rectangles in array</param>
void FindRectangle(Rectangle* rectangles,
				   int count);

/// <summary>
/// Demonstrate work of Flight class with dynamic array
/// </summary>
void DemoDynamicFlight();

/// <summary>
/// Find and print to console flight with min duration
/// </summary>
/// <param name="flights"></param>
/// <param name="count"></param>
void FindShortestFlight(Flight* flights,
						int count);

/// <summary>
/// Demonstrate of work Circle class
/// </summary>
void DemoCircle();

/// <summary>
/// Create new circle unit
/// </summary>
/// <param name="x">Center point by x cordinate</param>
/// <param name="y">Center point by y cordinate</param>
/// <param name="radius">Radius dimension</param>
/// <param name="color">Color of circle</param>
/// <returns>New circle</returns>
Circle* MakeCircle(double x,
				   double y,
				   double radius,
				   string color);

/// <summary>
/// Create new copy of circle
/// </summary>
/// <param name="circleToCopy">Circle to copy</param>
/// <returns>Copied circle</returns>
Circle* CopyCircle(Circle& circleToCopy);

/// <summary>
/// Create new rectangle unit
/// </summary>
/// <param name="Length">Length of rectangle</param>
/// <param name="Width">Width of rectangle</param>
/// <param name="Color">Color of rectangle</param>
/// <returns></returns>
Rectangle* MakeRectangle(float Length,
						 float Width,
						 string Color);

/// <summary>
/// Create new copy of rectangle
/// </summary>
/// <param name="rectangleToCopy">Rectangle to copy</param>
/// <returns>New rectangle copied from source</returns>
Rectangle* CopyRectangle(Rectangle& rectangleToCopy);

/// <summary>
/// Create new flight unit
/// </summary>
/// <param name="DeparturePoint">departure point of flight</param>
/// <param name="DestinationPoint">Destination point of flight</param>
/// <param name="FlightDurationMinutes">Duration of flight 
/// in minute</param>
/// <returns>New flight</returns>
Flight* MakeFlight(string DeparturePoint,
				   string DestinationPoint,
				   unsigned int FlightDurationMinutes);

/// <summary>
/// Create new copy of flight
/// </summary>
/// <param name="flightToCopy">Flight to copy</param>
/// <returns>New flight copied from source</returns>
Flight* CopyFlight(Flight& flightToCopy);

/// <summary>
/// Create new movie unit
/// </summary>
/// <param name="Name">Name of movie</param>
/// <param name="DurationMinutes">Duration of movie in minutes</param>
/// <param name="ReleaseYear">Release year of movie</param>
/// <param name="Genre">Genre of movie</param>
/// <param name="Rating">Rating of movie</param>
/// <returns>New movie</returns>
Movie* MakeMovie(string Name,
				 unsigned int DurationMinutes,
				 unsigned int ReleaseYear,
				 Genre Genre,
				 float Rating);

/// <summary>
/// Create new copy of movie
/// </summary>
/// <param name="movieToCopy">Movie to copy</param>
/// <returns>New movie copied from source</returns>
Movie* CopyMovie(Movie& movieToCopy);

/// <summary>
/// Create new time unit
/// </summary>
/// <param name="Hours">Count of hours</param>
/// <param name="Minutes">Count of minutes</param>
/// <param name="Seconds">Count of seconds</param>
/// <returns></returns>
Time* MakeTime(unsigned int Hours,
			   unsigned int Minutes,
			   unsigned int Seconds);

/// <summary>
/// Create new copy of time
/// </summary>
/// <param name="timeToCopy">Time to copy</param>
/// <returns>New time copied from source</returns>
Time* CopyTime(Time& timeToCopy);

/// <summary>
/// DEmonstrate work of Movie class
/// </summary>
void DemoMovieWithGenre();

/// <summary>
/// Find movie with inserted genre
/// </summary>
/// <param name="movies">Array of movies</param>
/// <param name="count">Count of movies in array</param>
/// <param name="findGenre">Genre to find by</param>
/// <returns>Movie with inserted genre</returns>
Movie* CountMoviesByGenre(Movie* movies, 
						  int count, 
						  Genre findGenre);