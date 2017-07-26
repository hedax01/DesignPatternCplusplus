#pragma once
#include "ColdDrink.h"
class Coke :
	public ColdDrink
{
public:
	Coke();
	~Coke();
	std::string name();
	float price();
};

