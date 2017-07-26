#pragma once
#include "Burger.h"
class ChickenBurger :
	public Burger
{
public:
	ChickenBurger();
	~ChickenBurger();
	std::string name();
	float price();
};

