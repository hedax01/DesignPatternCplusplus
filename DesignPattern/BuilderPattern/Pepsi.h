#pragma once
#include "ColdDrink.h"
class Pepsi :
	public ColdDrink
{
public:
	Pepsi();
	~Pepsi();
	std::string name();
	float price();
};

