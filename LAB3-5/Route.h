#pragma once

using namespace std;

struct Route
{
	int Number;
	int DurationInMinutes;
	int BusRouteIntervalInMinutes;
	int StopsCount;
	vector<string> stops;
};

void DemoRoute();

void ReadRouteFromConsole(Route& route);

void WriteRouteToConsole(Route& route);

int FindRouteTo(vector<Route>& routes,
				string stopName,
				int stopsCount);

int ReadRoutesCount();

int ReadRouteNumber();

int ReadRouteDurationMinutes();

int ReadBusRouteIntervalInMinutes();

int ReadStopsCount();