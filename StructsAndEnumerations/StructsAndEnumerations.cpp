#include <iostream>
#include <exception>

using namespace std;

/// <summary>
/// Sort array of double
/// </summary>
/// <param name="values">Array of double</param>
/// <param name="count">Count of elements</param>
void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw exception("Fatality. Count < 0.");
	}
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

/// <summary>
/// Show the result of sorting
/// </summary>
/// <param name="arrayUnit">Array</param>
/// <param name="count">Count of elements</param>
void DemoSort(double arrayUnit[], int count)
{
	cout << endl << "-------------------------------------" << endl;
	try
	{
		Sort(arrayUnit, count);
	}
	catch (const exception& error)
	{
		cout << "Exception catched!" << endl;
		cout << "Error: " << error.what() << endl;
		return;
	}
	cout << "Sort successful! Count = " << count << '.' << endl;
	// TODO: в size_t в таком приложении большого смысла нет
	for (size_t i = 0; i < count; i++)
	{
		cout << arrayUnit[i] << '\t';
	}
}

int main()
{
	int countArrayElements = 5;

	double* valuesFirst = new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesFirst, 5);
	
	double* valuesSecond = new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesSecond, -1);
	
	double* valuesThird = new double[countArrayElements] {100.0, 249.0, 12.0, 45.0, 23.5};
	DemoSort(valuesThird, 0);

	delete[] valuesFirst;
	delete[] valuesSecond;
	delete[] valuesThird;

	return 0;
}