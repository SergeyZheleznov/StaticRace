#pragma once

namespace RaceLibrary
{
	class Ground_vehicles : public Vehicles
	{
	public:
		float time_to_rest;
		float rest_time;
		float rest_time1;
		float rest_time2;
	public:
		Ground_vehicles();
		Ground_vehicles(int speed, float time_to_rest, float rest_time1, float rest_time2);
		float Get_time_to_rest();
		float Get_rest_time();
		float Get_rest_time1();
		float Get_rest_time2();
	};
}