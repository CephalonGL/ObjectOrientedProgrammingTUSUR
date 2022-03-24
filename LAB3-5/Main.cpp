#include "includes.h"
#include "Flight.h"
#include "Song.h"
#include "Band.h"
#include "..\Console\Console.h"
#include "..\Console\Console.cpp"

int main()
{
	DemoBook();
	Flight::DemoFlightWithTime();
	Band::DemoBand();
	return 0;
}