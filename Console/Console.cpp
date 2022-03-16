#include "Console.h"

int Console::ReadInt(string message)
{
    Print(message);
    int inputValue;
    cin >> inputValue;
    if (cin.fail())
    {
        cin.clear();
        string stringToDelete;
        cin >> stringToDelete;
        throw exception("Error: incorrect input data.");
    }
    Print("\n");
    return inputValue;
}

unsigned int Console::ReadUnsignedInt(string message)
{
    Print(message);
    unsigned int inputValue;
    cin >> inputValue;
    if (cin.fail())
    {
        cin.clear();
        string stringToDelete;
        cin >> stringToDelete;
        throw exception("Error: incorrect input data.");
    }
    Print("\n");
    return inputValue;
}

float Console::ReadFloat(string message)
{
    Print(message);
    float inputValue;
    cin >> inputValue;
    if (cin.fail())
    {
        cin.clear();
        string stringToDelete;
        cin >> stringToDelete;
        throw exception("Error: incorrect input data.");
    }
    Print("\n");
    return inputValue;
}

string Console::ReadString(string message)
{
    Print(message);
    string inputValue;
    cin >> inputValue;
    Print("\n");
    return inputValue;
}

void Console::Print(string message)
{
    cout << message;
}
