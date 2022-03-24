#include "Enumerations.h"
#include "Includes.h"

void DemoEnums()
{
	Color color = Red;
	WeekDay weekDay = Monday;
	Genre genre = Comedy;
	StudyForm studyForm = FullTime;
	SmartphoneManufacturer smartphoneManufacturer = Xiaomi;
	YearTime yearTime = Winter;

	Color colors[7] = { Red , Orange, Yellow, Green, Blue,
		DarkBlue, Violet };
	WeekDay weekDays[7] = { Monday, Tuesday, Wednesday, Thursday,
		Friday, Saturday, Sunday };
	Genre genres[6] = { Comedy, Drama, Thriller, Action,
		Horrors, Blockbuster };
	StudyForm studyForms[3] = { FullTime, Correspondence, Distance };
	SmartphoneManufacturer smartphoneManufacturers[7] = { Xiaomi,
		Samsung, Apple, Huawei, Realme, Vivo, Honor };
	YearTime yearTimes[4] = { Summer, Autumn,  Winter, Spring };
}

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color";
			break;
		}
		case Orange:
		{
			cout << "Orange color";
			break;
		}
		case Yellow:
		{
			cout << "Yellow color";
			break;
		}
		case Green:
		{
			cout << "Green color";
			break;
		}
		case Blue:
		{
			cout << "Blue color";
			break;
		}
		case DarkBlue:
		{
			cout << "DarkBlue color";
			break;
		}
		case Violet:
		{
			cout << "Violet color";
			break;
		}
		default:
		{
			cout << "Unknown color";
			break;
		}
	}
}

Color ReadColor()
{
	cout << "Enter number from 0 to 6:" << endl;
	cout << "\t0. Red color;" << endl;
	cout << "\t1. Orange color;" << endl;
	cout << "\t2. Yellow color;" << endl;
	cout << "\t3. Green color;" << endl;
	cout << "\t4. Blue color;" << endl;
	cout << "\t5. DarkBlue color;" << endl;
	cout << "\t6. Violet color." << endl;
	int color;
	cin >> color;
	return (Color)color;
}

int CountRed(Color* colors, int count)
{
	int countRed = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			countRed++;
		}
	}
	return countRed;
}

int CountColor(Color* colors, int count, Color findedColor)
{
	int countColor = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			countColor++;
		}
	}
	return countColor;
}
