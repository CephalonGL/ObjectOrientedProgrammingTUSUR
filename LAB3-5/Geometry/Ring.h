#pragma once

using namespace std;

class Ring
{
private:

	double _innerRadius = -1;

	double _outerRadius = -1;

	Point _center;

	static int _allRingsCount;

	double AssertOnPositiveValue(double value);

public:
	// TODO: ����� �� ������ ��� �� ��������?
	Ring(double innerRadius,
		 double outerRadius,
		 Point center);

	~Ring();

	double GetInnerRadius();
	void SetInnerRadius(const double& innerRadius);

	double GetOuterRadius();
	void SetOuterRadius(const double& outerRadius);

	Point& GetCenter();
	// TODO: � ����� ��� �� ������
	void SetCenter(const Point& center);

	double GetArea();

	static Ring MakeRing(double innerRadius,
						 double outerRadius,
						 Point center);

	static int GetAllRingsCount();
};

