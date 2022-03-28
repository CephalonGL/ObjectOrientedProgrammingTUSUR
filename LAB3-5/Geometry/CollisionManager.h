#pragma once
#include "stdafx.h"
#include "Geometry/Rectangle.h"

static class CollisionManager
{
private:
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