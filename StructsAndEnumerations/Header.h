#pragma once
#include <string>

using namespace std;

struct Rectangle
{
	float Length;
	float Width;
	string Color;
};

struct Flight
{
	string DeparturePoint;
	string DestinationPoint;
	int FlightDurationMinutes;
};

struct Movie
{
	string Name;
	int DurationMinutes;
	int ReleaseYear;
	string Genre;
	float Rating;
};

struct Time
{
	int Hours;
	int Minutes;
	int Seconds;
};

struct Contact
{
	string Name;
	string Surname;
	string PersonalPhoneNumber;
	string WorkPhoneNumber;
};

struct Song
{
	string Name;
	string Author;
	int DurationSeconds;
};

struct Subject
{
	string Name;
	string Code;
	int TotalDurationHours;
	int PracticeDurationHours;
	int LectureDurationHours;
	int LaboratoryDurationHours;
};
