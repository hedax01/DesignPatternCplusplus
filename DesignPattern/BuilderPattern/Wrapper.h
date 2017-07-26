#pragma once
#include "Packing.h"
class Wrapper :
	public Packing
{
public:
	Wrapper();
	~Wrapper();
	std::string pack();
};

