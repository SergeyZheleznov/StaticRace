﻿#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"

namespace RaceLibrary
{

	Camel::Camel() { name = "Верблюд"; speed = 10; time_to_rest = 30;	rest_time = 5; rest_time1 = 8; };
	Camel::Camel(float time_to_rest, float rest_time, float rest_time1) : Camel()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
		this->rest_time1 = rest_time1;
	};

}