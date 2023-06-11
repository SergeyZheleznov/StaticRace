#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "centaur.h"
#include "eagle.h"
#include "magic_carpet.h"

namespace RaceLibrary
{
	Magic_carpet::Magic_carpet()
	{
		name = "Ковёр-самолёт";
		speed = 10;
		k_lim = 3;
		k_lim_1 = 10;
		k_lim_2 = 5;
	};
	Magic_carpet::Magic_carpet(int speed, int k_lim, int k_lim_1, int k_lim_2) : Magic_carpet()
	{
		this->speed = speed;
		this->k_lim = k_lim;
		this->k_lim_1 = k_lim_1;
		this->k_lim_2 = k_lim_2;
	};
}