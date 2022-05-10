#pragma once
#include "../stdafx.h"
#include "../Geometry/Validator.h"
#include "../Geometry/Rectangle.h"
#include "../Geometry/Ring.h"

/// <summary>
/// Checker for collisions of geometric figures
/// </summary>
static class CollisionManager
{
private:
	// TODO: оно точно того стоило, создавать столько мелких закрытых методов? <???>
	// 
	// Когда я работал над красно-чёрными деревьями, то решил создать
	// множество небольших методов, возвращающих различных родственников
	// для узла, например: GetParent(), GetUncle() и подобные.
	// Такое форматирование позволило значительно снизить когнитивную
	// нагрузку для меня и значительно упростило отладку. В данном
	// случае я решил сделать то же самое. Для меня - это оправдано,
	// но, возможно, есть решение получше.
	//
	// Думал над созданием шаблона, но, насколько я знаю, в C++ 
	// эта механика тормознутая. Из-за того, что ЯП компилируемый, будут
	// создаваться перегрузки для всех типов данных, если я правильно
	// понимаю. Поэтому её лучше не использовать. К тому же, это выглядит
	// как костыль вместо полиморфизма.
	// Полиморфизм применить тут не могу, т.к. нет базового класса для
	// всех геометрических фигур... Но я бы создал такой класс.
	// 
	// Что тут лучше всего применить?

	/// <summary>
	/// Get distance by x between two points
	/// </summary>
	/// <param name="first">First point</param>
	/// <param name="second">Second point</param>
	/// <returns>Distance by x between two points</returns>
	static double GetDeltaX(Point& first,
							Point& second);

	/// <summary>
	/// Get distance by x between two rectangles
	/// </summary>
	/// <param name="first">First rectangle</param>
	/// <param name="second">Second rectangle</param>
	/// <returns>Distance by x between two rectangles</returns>
	static double GetDeltaX(Rectangle& first,
							Rectangle& second);
	/// <summary>
	/// Get distance by x between two rings
	/// </summary>
	/// <param name="first">First ring</param>
	/// <param name="second">Second ring</param>
	/// <returns>Distance by x between two rings</returns>
	static double GetDeltaX(Ring& first,
							Ring& second);

	/// <summary>
	/// Get distance by y between two points
	/// </summary>
	/// <param name="first">First point</param>
	/// <param name="second">Second point</param>
	/// <returns>Distance by y between two points</returns>
	static double GetDeltaY(Point& first,
							Point& second);

	/// <summary>
	/// Get distance by y between two rectangles
	/// </summary>
	/// <param name="first">First rectangle</param>
	/// <param name="second">Second rectangle</param>
	/// <returns>Distance by y between two rectangles</returns>
	static double GetDeltaY(Rectangle& first,
							Rectangle& second);

	/// <summary>
	/// Get distance by y between two rings
	/// </summary>
	/// <param name="first">First ring</param>
	/// <param name="second">Second ring</param>
	/// <returns>Distance by y between two rings</returns>
	static double GetDeltaY(Ring& first,
							Ring& second);

	/// <summary>
	/// Get delta between lengths of two rectangles
	/// </summary>
	/// <param name="first">First rectangle</param>
	/// <param name="second">Second rectangle</param>
	/// <returns>Delta between lengths of two rectangles</returns>
	static double GetDeltaLength(Rectangle& first, 
								 Rectangle& second);
	/// <summary>
	/// Get delta between widths of two rectangles
	/// </summary>
	/// <param name="first">First rectangle</param>
	/// <param name="second">Second rectangle</param>
	/// <returns>Delta between widths of two rectangles</returns>
	static double GetDeltaWidth(Rectangle& first, 
								Rectangle& second);

	/// <summary>
	/// Get distance between two points
	/// </summary>
	/// <param name="first">First point</param>
	/// <param name="second">Second point</param>
	/// <returns>Distance between two points</returns>
	static double GetDistanceBetweenPoints(Point& first,
										   Point& second);

	/// <summary>
	/// Get distance between two ring centers
	/// </summary>
	/// <param name="first">First ring</param>
	/// <param name="second">Second ring</param>
	/// <returns>Distance between two rings</returns>
	static double GetDistanceBetweenRingsCenters(Ring& first, 
												 Ring& second);
	
	/// <summary>
	/// Sum outer radiuses of two rings
	/// </summary>
	/// <param name="first">First ring</param>
	/// <param name="second">Second ring</param>
	/// <returns>Sum of outer radiuses</returns>
	static double GetOuterRadiusSum(Ring& first,
									Ring& second);

public:

	/// <summary>
	/// Check if two rectangles have collision
	/// </summary>
	/// <param name="first">First reactengle</param>
	/// <param name="second">Second reactengle</param>
	/// <returns>True if have collision, false otherwise</returns>
	static bool IsCollision(Rectangle& first,
							Rectangle& second);

	/// <summary>
	/// Check if two rings have collision
	/// </summary>
	/// <param name="first">First ring</param>
	/// <param name="second">Second ring</param>
	/// <returns>True if have collision, false otherwise</returns>
	static bool IsCollision(Ring& first,
							Ring& second);
};