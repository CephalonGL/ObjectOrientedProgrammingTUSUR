#pragma once

using namespace std;

/// <summary>
/// Route
/// </summary>
struct Route
{
	/// <summary>
	/// Number
	/// </summary>
	int Number;

	/// <summary>
	/// Duration minutes
	/// </summary>
	int DurationInMinutes;

	/// <summary>
	/// Bus route interval in minutes
	/// </summary>
	int BusRouteIntervalInMinutes;

	/// <summary>
	/// Stops count
	/// </summary>
	int StopsCount;

	/// <summary>
	/// Stops
	/// </summary>
	vector<string> stops;
};

/// <summary>
/// Demonstrates work of Route structure
/// </summary>
void DemoRoute();

/// <summary>
/// Reads route from console and fills field
/// </summary>
/// <param name="route">Route to fill fields</param>
void ReadRouteFromConsole(Route& route);

/// <summary>
/// Write route to console
/// </summary>
/// <param name="route">Route to write</param>
void WriteRouteToConsole(Route& route);

/// <summary>
/// Search for route by stop name
/// </summary>
/// <param name="routes">All routes</param>
/// <param name="stopName">Stop name to search</param>
/// <param name="stopsCount">Stops count</param>
/// <returns></returns>
int FindRouteTo(vector<Route>& routes,
				string stopName,
				int stopsCount);

/// <summary>
/// Read routes count from console and check it
/// </summary>
/// <returns>Routes count if correct,
///  otherwise throw exception</returns>
int ReadRoutesCount();

/// <summary>
/// Read route number from console and check it
/// </summary>
/// <returns>Route number if correct,
///  otherwise throw exception</returns>
int ReadRouteNumber();

/// <summary>
/// Read route duration minutes from console and check it
/// </summary>
/// <returns>Route duration in minutes if correct,
///  otherwise throw exception</returns>
int ReadRouteDurationInMinutes();

/// <summary>
/// Read bus route interval in minutes from console and check it
/// </summary>
/// <returns>Bus route interval in minutes if correct,
///  otherwise throw exception</returns>
int ReadBusRouteIntervalInMinutes();

/// <summary>
/// Read stops count from console and check it
/// </summary>
/// <returns>Stops count if correct, otherwise throw exception</returns>
int ReadStopsCount();