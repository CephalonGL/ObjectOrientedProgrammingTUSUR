#pragma once

// TODO: а вас на СД не заставляли комментировать код? +

/// <summary>
/// Class for flights
/// </summary>
class Flight
{
private:
	/// <summary>
	/// number of flight
	/// </summary>
	int _number;

	// TODO: откуда слово Point? У слова destination его нет, и это правильно +
	
	/// <summary>
	/// Departure of flight
	/// </summary>
	string _departure;

	/// <summary>
	/// Time of departure
	/// </summary>
	Time _departureTime;

	/// <summary>
	/// Destination of flight
	/// </summary>
	string _destination;

	/// <summary>
	/// Time of destination
	/// </summary>
	Time _destinationTime;

public:
	/// <summary>
	/// Create empty flight
	/// </summary>
	Flight();

	// TODO: в локальных переменных тоже исправить именование +

	/// <summary>
	/// Create flight with all parameters
	/// </summary>
	/// <param name="number">Number of flight</param>
	/// <param name="departure">Departure of flight</param>
	/// <param name="departureTime">Time of departure</param>
	/// <param name="destination">Destination of flight</param>
	/// <param name="destinationTime">Time of destination</param>
	Flight(int number,
		   string departure,
		   Time departureTime,
		   string destination,
		   Time destinationTime);

	/// <summary>
	/// Getter for number of flight
	/// </summary>
	/// <returns>Number of flight</returns>
	int GetNumber();

	/// <summary>
	/// Setter for number of flight
	/// </summary>
	/// <param name="number">Flight number</param>
	void SetNumber(int number);

    // TODO: именование +

	/// <summary>
	/// Getter for departure
	/// </summary>
	/// <returns>Departure</returns>
	string GetDeparture();

	// TODO: именование +

	/// <summary>
	/// Setter for Departure
	/// </summary>
	/// <param name="departure">Departure</param>
	void SetDeparture(string departure);

	/// <summary>
	/// Getter function for departure
	/// </summary>
	/// <returns>Departure time</returns>
	Time GetDepartureTime();

	/// <summary>
	/// Setter for departure time
	/// </summary>
	/// <param name="departureTime">Departure time</param>
	void SetDepartureTime(Time departureTime);

	/// <summary>
	/// Getter function for destination
	/// </summary>
	/// <returns>Destination</returns>
	string GetDestination();

	/// <summary>
	/// Setter function for destination
	/// </summary>
	/// <param name="destination">Destination</param>
	void SetDestination(string destination);

	/// <summary>
	/// Getter function for destination time
	/// </summary>
	/// <returns>Destination time</returns>
	Time GetDestinationTime();

	/// <summary>
	/// Setter fnction for destination time
	/// </summary>
	/// <param name="destinationTime">Destination time</param>
	void SetDestinationTime(Time destinationTime);

	/// <summary>
	/// Getter for flight time
	/// </summary>
	/// <returns>Flight time</returns>
	Time GetFlightTime();
};

