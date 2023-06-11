#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "centaur.h"

namespace RaceLibrary
{

	Centaur::Centaur()
	{
		name = " ентавр";
		speed = 15;
		time_to_rest = 8;
		rest_time = 2;
	};
	Centaur::Centaur(float time_to_rest, float rest_time) : Centaur()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	};

}