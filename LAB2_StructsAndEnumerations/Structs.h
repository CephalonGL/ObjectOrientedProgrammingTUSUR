#pragma once
#include "Includes.h"

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
	unsigned int FlightDurationMinutes;
};

struct Movie
{
	string Name;
	unsigned int DurationMinutes;
	unsigned int ReleaseYear;
	Genre Genre;
	float Rating;
};

struct Time
{
	unsigned int Hours;
	unsigned int Minutes;
	unsigned int Seconds;
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
	unsigned int DurationSeconds;
};

struct Subject
{
	string Name;
	string Code;
	unsigned int TotalDurationHours;
	unsigned int PracticeDurationHours;
	unsigned int LectureDurationHours;
	unsigned int LaboratoryDurationHours;
};

struct Circle
{
	double X;
	double Y;
	double Radius;
	string Color;
};