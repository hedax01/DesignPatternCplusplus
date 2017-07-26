#pragma once
#include "Item.h"
#include "Bottle.h"
class ColdDrink :
	public Item
{
public:
	ColdDrink();
	~ColdDrink();
	Packing * packing();
	virtual float price() = 0;
};

