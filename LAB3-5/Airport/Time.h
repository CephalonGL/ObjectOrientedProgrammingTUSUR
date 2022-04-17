#pragma once

class Time
{
private:

	int _year;

	int _month;
	
	int _day;
	
	int _hour;
	
	int _minute;

public:
	Time();
	Time(int year,
		 int month,
		 int day,
		 int hour,
		 int minute);

	int GetYear();
	void SetYear(int year);

	int GetMonth();
	void SetMonth(int month);

	int GetDay();
	void SetDay(int day);

	int GetHour();
	void SetHour(int hour);

	int GetMinute();
	void SetMinute(int minute);

	bool IsNull();

	string GetFormattedDate();
	string GetFormattedTime();
	
	bool operator == (Time& another);
};

