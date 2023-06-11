#pragma once

namespace RaceLibrary
{
	class Racer_result
	{
	public:
		std::string racer_name;
		float racer_speed;
		float racer_time;

		Racer_result();
		Racer_result(std::string racer_name, float racer_time, float racer_speed);
		float Get_racer_speed();
		float Get_racer_time();
		std::string Get_racer_name();
		void Set_racer_speed(float racer_speed);
		void Set_racer_time(float racer_time);
		void Set_racer_name(std::string racer_name);
	};
}