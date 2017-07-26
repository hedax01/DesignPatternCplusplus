#pragma once
#include<iostream>
#include<vector>
#include"Item.h"
class Meal
{
public:
	Meal();
	~Meal();
	void addItem(Item* item);
	float getCost();
	void showItem();
private:
	std::vector<Item*> item;
	

};

