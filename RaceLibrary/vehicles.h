#pragma once
#include <iostream>

namespace RaceLibrary
{
	class Vehicles {
	public:
		int speed = 0;
		float race_time = 0;
		std::string name = "Транспортное средство";

		Vehicles();
		Vehicles(int speed, std::string name);
		int Get_speed();
		float Get_race_time();
		std::string Get_name();
		void Set_race_time(float value_race_time);
	};
}