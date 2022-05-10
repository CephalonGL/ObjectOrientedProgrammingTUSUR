#include "../stdafx.h"
#include "../Geometry/CollisionManager.h"

double CollisionManager::GetDeltaX(Point& first,
								   Point& second)
{
	return abs(first.GetX() - second.GetX());
}

double CollisionManager::GetDeltaX(Rectangle& first,
								   Rectangle& second)
{
	return GetDeltaX(first.GetCenter(), second.GetCenter());
}

double CollisionManager::GetDeltaX(Ring& first,
								   Ring& second)
{
	return GetDeltaX(first.GetCenter(), second.GetCenter());
}

double CollisionManager::GetDeltaY(Point& first,
								   Point& second)
{
	return abs(first.GetY() - second.GetY());
}

double CollisionManager::GetDeltaY(Rectangle& first,
								   Rectangle& second)
{
	return GetDeltaY(first.GetCenter(), second.GetCenter());
}

double CollisionManager::GetDeltaY(Ring& first,
								   Ring& second)
{
	return GetDeltaY(first.GetCenter(), second.GetCenter());
}

double CollisionManager::GetDeltaLength(Rectangle& first,
										Rectangle& second)
{
	return abs(first.GetLength() - second.GetLength());
}

double CollisionManager::GetDeltaWidth(Rectangle& first,
									   Rectangle& second)
{
	return abs(first.GetWidth() - second.GetWidth());
}

double CollisionManager::GetDistanceBetweenPoints(Point& first,
												  Point& second)
{
	double dX = GetDeltaX(first, second);
	double dY = GetDeltaY(first, second);
	return sqrt(dX * dX + dY * dY);
}

double CollisionManager::GetDistanceBetweenRingsCenters(Ring& first,
														Ring& second)
{
	return GetDistanceBetweenPoints(first.GetCenter(), second.GetCenter());
}

double CollisionManager::GetOuterRadiusSum(Ring& first, Ring& second)
{
	return first.GetOuterRadius() + second.GetOuterRadius();
}

bool CollisionManager::IsCollision(Rectangle& first,
								   Rectangle& second)
{
	return (GetDeltaX(first, second)
			< GetDeltaLength(first, second) / 2
			&& GetDeltaY(first, second)
			< GetDeltaWidth(first, second) / 2);
}

bool CollisionManager::IsCollision(Ring& first,
								   Ring& second)
{
	return GetDistanceBetweenRingsCenters(first, second)
		< GetOuterRadiusSum(first, second);
}