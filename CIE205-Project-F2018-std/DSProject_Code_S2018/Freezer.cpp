#include "Freezer.h"


Freezer::Freezer(color r_c, REGION r_region, int d, int reload):Enemy( r_c,  r_region,d)
{
	reload_period= reload;
}


Freezer::~Freezer(void)
{
}


void Freezer::Act()
{
	// here we will add some ice on the tower
	int k = 0.5;
	double ice_to_add = (k / Distance)*get_power();
	target->increment_ice(ice_to_add);
}

void Freezer::Move()
{
	if(!is_frozen())
	{
		DecrementDist();
	}
}

bool Freezer::is_frozen()
{
	return frozen;
}


void Freezer::set_target(Tower* Tower)
{
	target = Tower;
}