#include "..\stdafx.h"

Time::Time()
{
	SetYear(0);
	SetMonth(0);
	SetDay(0);
	SetHour(0);
	SetMinute(0);
}

Time::Time(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

int Time::GetYear()
{
	return _year;
}

void Time::SetYear(int year)
{
	if (year > 0)
	{
		_year = year;
	}
	else
	{
		throw exception("Error: year is out of range");
	}
}

int Time::GetMonth()
{
	return _month;
}

void Time::SetMonth(int month)
{
	if (month >= 1
		&& month <= 12)
	{
		_month = month;
	}
	else
	{
		throw exception("Error: month out is of range.");
	}
}

int Time::GetDay()
{
	return _day;
}

void Time::SetDay(int day)
{
	if (day <= 30
		&& day >= 1)
	{
		_day = day;
	}
	else
	{
		throw exception("Error: day is out of range");
	}
}

int Time::GetHour()
{
	return _hour;
}

void Time::SetHour(int hour)
{
	if (hour >= 0
		&& hour <= 24)
	{
		_hour = hour;
	}
	else
	{
		throw exception("Error: hour is out of range");
	}
}

int Time::GetMinute()
{
	return _minute;
}

void Time::SetMinute(int minute)
{
	if (minute >= 0
		&& minute <= 59)
	{
		_minute = minute;
	}
	else
	{
		throw exception("Error: minute is out of range");
	}
}

bool Time::IsNull()
{
	if (GetYear() == 0
		&& GetMonth() == 0
		&& GetDay() == 0
		&& GetHour() == 0
		&& GetMinute() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string Time::GetFormattedDate()
{
	string formattedDate = "";
	if (GetDay() < 10)
	{
		formattedDate += "0";
	}
	formattedDate += GetDay();
	formattedDate += ".";

	if (GetMonth() < 10)
	{
		formattedDate += "0";
		cout << "0" << GetMonth() << " ";
	}
	formattedDate += GetMonth();
	return formattedDate;
}

string Time::GetFormattedTime()
{
	return string(GetHour() + ":" + GetMinute());
}

bool Time::operator==(Time& another)
{
	if (GetYear() >
		another.GetYear()

		|| (GetYear() <=
			another.GetYear()
			&& GetMonth() >
			another.GetMonth())

		|| (GetYear() <=
			another.GetYear()
			&& GetMonth() <=
			another.GetMonth()
			&& GetDay() >
			another.GetDay())

		|| (GetYear() <=
			another.GetYear()
			&& GetMonth() <=
			another.GetMonth()
			&& GetDay() <=
			another.GetDay()
			&& GetHour() >
			another.GetHour())

		|| (GetYear() <=
			another.GetYear()
			&& GetMonth() <=
			another.GetMonth()
			&& GetDay() <=
			another.GetDay()
			&& GetHour() <=
			another.GetHour()
			&& GetMinute() >
			another.GetMinute()))
	{
		return true;
	}
	else
	{
		return false;
	}
}
