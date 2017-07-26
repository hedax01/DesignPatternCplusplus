#pragma once
#include<string>
#include "Packing.h"
#include "Packing.h"
class Item
{
public:
	Item();
	~Item();
	virtual std::string name() = 0;
	virtual Packing * packing() = 0;
	virtual float price() = 0;
};

