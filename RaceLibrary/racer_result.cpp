﻿#include "vehicles.h"
#include "ground_vehicles.h"
#include "air_vehicles.h"
#include "all_boots.h"
#include "camel.h"
#include "centaur.h"
#include "eagle.h"
#include "magic_carpet.h"
#include "broom.h"
#include "racer_result.h"

namespace RaceLibrary
{

	Racer_result::Racer_result()
	{
		racer_name;
		racer_speed;
		racer_time;
	};

	Racer_result::Racer_result(std::string racer_name, float racer_time, float racer_speed)
	{
		this->racer_speed = racer_speed;
		this->racer_name = racer_name;
		this->racer_time = racer_speed;
	};

	float Racer_result::Get_racer_speed()
	{
		return racer_speed;
	};

	float Racer_result::Get_racer_time()
	{
		return racer_time;
	};

	std::string Racer_result::Get_racer_name()
	{
		return racer_name;
	};

	void Racer_result::Set_racer_speed(float racer_speed)
	{
		this->racer_speed = racer_speed;
	};

	void Racer_result::Set_racer_time(float racer_time)
	{
		this->racer_time = racer_time;
	};

	void Racer_result::Set_racer_name(std::string racer_name)
	{
		this->racer_name = racer_name;
	};
}