#include "Console.h"

int Console::ReadInt(string message)
{
    while (true)
    {
        WriteLine(message);
        int inputValue;
        cin >> inputValue;
        if (cin.fail())
        {
            cin.clear();
            string stringToDelete;
            cin >> stringToDelete;
            WriteLine("Error: incorrect input data.");
        }
        else
        {
            return inputValue;
        }
        WriteLine("\n");
    }
}

unsigned int Console::ReadUnsignedInt(string message)
{
    WriteLine(message);
    unsigned int inputValue;
    cin >> inputValue;
    if (cin.fail())
    {
        cin.clear();
        string stringToDelete;
        cin >> stringToDelete;
        throw exception("Error: incorrect input data.");
    }
    WriteLine("\n");
    return inputValue;
}

float Console::ReadFloat(string message)
{
    while (true)
    {
        WriteLine(message);
        float inputValue;
        cin >> inputValue;
        if (cin.fail())
        {
            cin.clear();
            string stringToDelete;
            cin >> stringToDelete;
            WriteLine("Error: incorrect input data.");
        }
        else
        {
            return inputValue;
        }
        WriteLine("\n");
    }
}

string Console::ReadString(string message)
{
    WriteLine(message);
    string inputValue;
    cin >> inputValue;
    WriteLine("\n");
    return inputValue;
}

void Console::WriteLine(string message)
{
    cout << message;
}
