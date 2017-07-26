#include "ColdDrink.h"



ColdDrink::ColdDrink()
{
}


ColdDrink::~ColdDrink()
{
}

Packing * ColdDrink::packing()
{
	return new Bottle();
}
