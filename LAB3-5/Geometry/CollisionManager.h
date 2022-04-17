#pragma once
#include "../stdafx.h"
#include "../Geometry/Rectangle.h"

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
	// понимаю. Поэтому её лучше не использовать.
	// 
	// Полиморфизм применить тут не могу, т.к. нет базового класса для
	// всех геометрических фигур...
	// 
	// Что тут лучше всего применить?

	static double GetDeltaX(Point& first,
							Point& second);

	static double GetDeltaX(Rectangle& first,
							Rectangle& second);

	static double GetDeltaX(Ring& first,
							Ring& second);

	static double GetDeltaY(Point& first,
							Point& second);

	static double GetDeltaY(Rectangle& first,
							Rectangle& second);

	static double GetDeltaY(Ring& first,
							Ring& second);

	static double GetDeltaLength(Rectangle& first, 
								 Rectangle& second);
	
	static double GetDeltaWidth(Rectangle& first, 
								Rectangle& second);

	static double GetDistanceBetweenPoints(Point& first,
										   Point& second);

	static double GetDistanceBetweenRingsCenters(Ring& first, 
												 Ring& second);
	
	static double GetOuterRadiusSum(Ring& first,
									Ring& second);

public:
	static bool IsCollision(Rectangle& first,
							Rectangle& second);

	static bool IsCollision(Ring& first,
							Ring& second);
};