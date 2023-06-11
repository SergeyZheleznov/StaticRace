#pragma once

namespace RaceLibrary
{
	class Eagle : public Air_vehicles
	{
	public:
		Eagle();
		Eagle(int speed, int k_lim, int k_k_lim, int k_lim_2);
	};
}