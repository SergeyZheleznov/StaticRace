#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "quick_camel.h"


namespace RaceLibrary
{
	Quick_Camel::Quick_Camel()
	{
		name = "Верблюд-быстроход";
		speed = 40;
		time_to_rest = 10;
		rest_time = 5;
		rest_time1 = 6.5;
		rest_time2 = 8;

	};

	Quick_Camel::Quick_Camel(float time_to_rest, float rest_time, float rest_time1, float rest_time2)
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
		this->rest_time1 = rest_time1;
		this->rest_time2 = rest_time2;
	};
}