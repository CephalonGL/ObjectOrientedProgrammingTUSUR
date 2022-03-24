#include "Route.h"

void DemoRoute()
{
	int routesCount = ReadRoutesCount();
	vector<Route> routes;
	for (int i = 0; i < routesCount; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	for (int i = 0; i < routesCount; i++)
	{
		WriteRouteToConsole(routes[i]);
	}
	FindRouteTo(routes, ReadString("Enter author to find: "),
				routesCount);
}

void ReadRouteFromConsole(Route& route)
{
	WriteLine("Enter route info:\n");
	route.Number = ReadRouteNumber();
	route.DurationInMinutes = ReadRouteDurationMinutes();
	route.BusRouteIntervalInMinutes = ReadBusRouteIntervalInMinutes();
	route.StopsCount = ReadStopsCount();
	for (int i = 0; i < route.StopsCount; i++)
	{
		route.stops[i] = ReadString("Enter stop name: ");
		cout << endl;
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << "Route number " << route.Number << ":" << endl;
	cout << "Duration: " << route.DurationInMinutes 
		<< " minutes;" << endl;
	cout << "Bus interval: " << route.BusRouteIntervalInMinutes
		<< " minutes;" << endl;
	cout << "Bus stops count: " << route.StopsCount << ";" << endl;
	cout << "Bus stops list: " << endl;
	for (int i = 0; i < route.StopsCount; i++)
	{
		cout << "\t" << i << ". " << route.stops[i];
		if (i == route.StopsCount - 1)
		{
			cout << ".";
		}
		else
		{
			cout << ";";
		}
		cout << endl;
	}
}

int FindRouteTo(vector<Route>& routes, string stopName, int routesCount)
{
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].StopsCount; j++)
		{
			if (stopName == routes[i].stops[j])
			{
				return i;
			}
		}
	}
	return -1;
}

int ReadRoutesCount()
{
	while (true)
	{
		int routesCount = ReadInt("Enter routes count: ");
		if (routesCount >= 3
			&& routesCount <= 5)
		{
			return routesCount;
		}
		else
		{
			WriteLine("Incorrect routes count. Repeat, please.\n");
		}
	}
}

int ReadRouteNumber()
{
	while (true)
	{
		int routeNumbet = ReadInt("Enter route number: ");
		if (routeNumbet > 0)
		{
			return routeNumbet;
		}
		else
		{
			WriteLine("Incorrect route number. Repeat, please.\n");
		}
	}
}

int ReadRouteDurationMinutes()
{
	while (true)
	{
		int routeDurationMinutes =
			ReadInt("Enter route duration in minutes: ");
		if (routeDurationMinutes > 0)
		{
			return routeDurationMinutes;
		}
		else
		{
			WriteLine("Incorrect duration. Repeat, please.\n");
		}
	}
}

int ReadBusRouteIntervalInMinutes()
{
	while (true)
	{
		int busRouteIntervalInMinutes =
			ReadInt("Enter bus route interval in minutes: ");
		if (busRouteIntervalInMinutes > 0)
		{
			return busRouteIntervalInMinutes;
		}
		else
		{
			WriteLine("Incorrect interval. Repeat, please.\n");
		}
	}
}

int ReadStopsCount()
{
	while (true)
	{
		int stopsCount =
			ReadInt("Enter stops count: ");
		if (stopsCount > 0)
		{
			return stopsCount;
		}
		else
		{
			WriteLine("Incorrect count. Repeat, please.\n");
		}
	}
}
