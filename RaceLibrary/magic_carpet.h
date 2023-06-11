#pragma once

namespace RaceLibrary
{
	class Magic_carpet : public Air_vehicles
	{
	public:
		Magic_carpet();
		Magic_carpet(int speed, int k_lim, int k_lim_1, int k_lim_2);
	};
}