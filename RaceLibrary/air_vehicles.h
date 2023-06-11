#pragma once

namespace RaceLibrary
{
	class Air_vehicles : public Vehicles
	{
	public:
		int k_lim;
		int k_lim_1;
		int k_lim_2;

		Air_vehicles();
		Air_vehicles(int speed, int k_lim, int k_k_lim, int k_lim_2);
		int Get_k_lim();
		int Get_k_lim_1();
		int Get_k_lim_2();
	};
}