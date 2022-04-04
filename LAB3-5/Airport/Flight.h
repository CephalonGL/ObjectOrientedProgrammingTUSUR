#pragma once

// TODO: � ��� �� �� �� ���������� �������������� ���?
class Flight
{
private:

	int _number;

	// TODO: ������ ����� Point? � ����� destination ��� ���, � ��� ���������
	string _departurePoint;

	Time _departureTime;

	string _destination;

	Time _destinationTime;

public:

	Flight();
	// TODO: � ��������� ���������� ���� ��������� ����������
	Flight(int number,
		   string departurePoint,
		   Time departureTime,
		   string destination,
		   Time destinationTime);

	int GetNumber();
	void SetNumber(int number);

    // TODO: ����������
	string GetDeparturePoint();
	// TODO: ����������
	void SetDeparturePoint(string departurePoint);

	Time GetDepartureTime();
	void SetDepartureTime(Time departureTime);

	string GetDestination();
	void SetDestination(string destination);

	Time GetDestinationTime();
	void SetDestinationTime(Time destinationTime);

	// TODO: ���� ����� ���������� � ����������� ����, � �� ������ ���� ������ ������
	static void DemoFlightWithTime();

	Time GetFlightTime();
};

