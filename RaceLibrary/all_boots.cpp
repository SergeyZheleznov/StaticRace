﻿#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"

namespace RaceLibrary
{
	All_boots::All_boots() { name = "Ботинки-вездеходы"; speed = 6; time_to_rest = 60; rest_time = 10; rest_time1 = 5; }
	All_boots::All_boots(int time_to_rest, int rest_time, int time_to_rest1) : All_boots()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
		this->rest_time1 = rest_time1;
	};
}