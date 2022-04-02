#pragma once
#include <string>
#include <exception>
#include <iostream>
#include <ctype.h>
using namespace std;

static class Console
{
public:
	/// <summary>
	/// Print message if got, then read
	/// value from console and check if it is int.
	/// </summary>
	/// <param name="message">Message to print before reading</param>
	/// <returns>Int input value from console</returns>
	static int ReadInt(const string& message = "");

	/// <summary>
	/// Print message if got, then read
	/// value from console and check if it is unsigned int.
	/// </summary>
	/// <param name="message">Message to print before reading</param>
	/// <returns>Unsigned int input value from console</returns>
	static unsigned int ReadUnsignedInt(const string& message = "");

	/// <summary>
	/// Print message if got, then read
	/// value from console and check if it is float.
	/// </summary>
	/// <param name="message">Message to print before reading</param>
	/// <returns>Float input value from console</returns>
	static float ReadFloat(const string& message = "");

	/// <summary>
	/// Read value from console
	/// </summary>
	/// <param name="message">Message to print 
	/// before reading</param>
	/// <returns>Input string</returns>
	static string ReadString(const string& message = "");

	/// <summary>
	/// Print message to console
	/// </summary>
	/// <param name="message">Message to print</param>
	static void WriteLine(const string& message = "");
};