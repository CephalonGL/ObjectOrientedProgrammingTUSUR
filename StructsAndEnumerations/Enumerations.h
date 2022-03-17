#pragma once

enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Violet
};

enum WeekDay
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horrors,
	Blockbuster
};

enum StudyForm
{
	FullTime,
	Correspondence,
	Distance
};

enum SmartphoneManufacturer
{
	Xiaomi,
	Samsung,
	Apple,
	Huawei,
	Realme,
	Vivo,
	Honor
};

enum YearTime
{
	Summer,
	Autumn,
	Winter,
	Spring
};

void DemoEnums();

void WriteColor(Color color);

Color ReadColor();

int CountRed(Color* colors, int count);