#pragma once
#include "Burger.h"

class VegBurger : public Burger
{
public:
	VegBurger();
	~VegBurger();
	std::string name();
	float price();
};

