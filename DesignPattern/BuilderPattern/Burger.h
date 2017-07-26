#pragma once
#include "Item.h"
#include "Wrapper.h"

class Burger : public Item
{
public:
	Burger();
	~Burger();
	Packing * packing();
	virtual std::string name() = 0;	
	virtual float price()=0;
};

