#pragma once

/// <summary>
/// Stores info about year, month, day, hour and minute inside
/// </summary>
class Time
{
private:

	/// <summary>
	/// Stores year
	/// </summary>
	int _year;

	/// <summary>
	/// Stores month
	/// </summary>
	int _month;
	
	/// <summary>
	/// Stores day
	/// </summary>
	int _day;
	
	/// <summary>
	/// Stores hour
	/// </summary>
	int _hour;
	
	/// <summary>
	/// Stores minute
	/// </summary>
	int _minute;

public:

	/// <summary>
	/// Creates non-initialized time
	/// </summary>
	Time();

	/// <summary>
	/// Create time with all initialized fields
	/// </summary>
	/// <param name="year">Year</param>
	/// <param name="month">Month</param>
	/// <param name="day">Day</param>
	/// <param name="hour">Hour</param>
	/// <param name="minute">Minute</param>
	Time(int year,
		 int month,
		 int day,
		 int hour,
		 int minute);

	/// <summary>
	/// Getter function for year
	/// </summary>
	/// <returns>Year</returns>
	int GetYear();

	/// <summary>
	/// Setter function for year
	/// </summary>
	/// <param name="year">Year</param>
	void SetYear(int year);
	
	/// <summary>
	/// Getter function for month
	/// </summary>
	/// <returns>Month</returns>
	int GetMonth();

	/// <summary>
	/// Setter function for month
	/// </summary>
	/// <param name="month">Month</param>
	void SetMonth(int month);

	/// <summary>
	/// Getter function for day
	/// </summary>
	/// <returns>Day</returns>
	int GetDay();

	/// <summary>
	/// Setter function for day
	/// </summary>
	/// <param name="day">Day</param>
	void SetDay(int day);

	/// <summary>
	/// Getter function for
	/// </summary>
	/// <returns>Hour</returns>
	int GetHour();

	/// <summary>
	/// Setter function for hour
	/// </summary>
	/// <param name="hour">Hour</param>
	void SetHour(int hour);

	/// <summary>
	/// Getter function for minute
	/// </summary>
	/// <returns>Minute</returns>
	int GetMinute();

	/// <summary>
	/// Setter function for minute
	/// </summary>
	/// <param name="minute">Minute</param>
	void SetMinute(int minute);

	/// <summary>
	/// Check if all fields are null
	/// </summary>
	/// <returns></returns>
	bool IsNull();

	/// <summary>
	/// Create string by template: DD.MM
	/// </summary>
	/// <returns>Formatted date</returns>
	string GetFormattedDate();

	/// <summary>
	/// Create string by template: HH:MM
	/// </summary>
	/// <returns></returns>
	string GetFormattedTime();
	
	/// <summary>
	/// Check if times are equal
	/// </summary>
	/// <param name="another">Time to check</param>
	/// <returns>True if equal, false otherwise</returns>
	bool operator == (Time& another);
};

