#include "Burger.h"


Burger::Burger()
{
}


Burger::~Burger()
{
}

Packing * Burger::packing()
{
	return new Wrapper();
}

