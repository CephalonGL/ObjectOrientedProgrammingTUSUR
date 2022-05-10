#pragma once
#include "../University/Student.h"
#include "../University/Teacher.h"

// TODO: используй один подход к именованию демонстрационных классов. Где-то program, где-то show. +
// TODO: вообще, здесь название класса подходит для метода, но не для класса. +

/// <summary>
/// User interface for Person class
/// </summary>
static class PersonProgram
{
public:

	/// <summary>
	/// Demonstrates work of Person class
	/// </summary>
	/// <param name="person">Person to demonstrate</param>
	static void DemoName(Person* person);
};