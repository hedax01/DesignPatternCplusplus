#include "Meal.h"



Meal::Meal()
{
}


Meal::~Meal()
{
	item.clear();
}

void Meal::addItem(Item * item)
{
	this->item.push_back(item);
}

float Meal::getCost()
{
	float cost = 0.0f;
	for (auto it : item) {
		cost = cost + it->price();
	}
	return cost;
}

void Meal::showItem()
{
	for (auto it : item) {
		std::cout << "Item: " << it->name();
		std::cout << ", Packing: " << it->packing()->pack();
		std::cout << ", Price: " << it->price() << "\n";
	}
}
