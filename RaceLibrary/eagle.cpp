﻿#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "centaur.h"
#include "eagle.h"

namespace RaceLibrary
{

	Eagle::Eagle()
	{
		name = "Орёл";
		speed = 8;
		k_lim = 6;
		k_lim_1 = 10;
		k_lim_2 = 5;
	};

	Eagle::Eagle(int speed, int k_lim, int k_lim_1, int k_lim_2) : Eagle()
	{
		this->speed = speed;
		this->k_lim = k_lim;
		this->k_lim_1 = k_lim_1;
		this->k_lim_2 = k_lim_2;
	};
}