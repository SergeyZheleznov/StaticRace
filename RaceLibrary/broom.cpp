#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "centaur.h"
#include "eagle.h"
#include "magic_carpet.h"
#include "broom.h"


namespace RaceLibrary
{

	Broom::Broom()
	{
		name = "Метла";
		speed = 20;
		k_lim = 1;
	};
	Broom::Broom(int speed, int k_lim) : Broom()
	{
		this->speed = speed;
		this->k_lim = k_lim;
	};

}