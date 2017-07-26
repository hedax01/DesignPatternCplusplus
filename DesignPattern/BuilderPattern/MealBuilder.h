#pragma once
#include "Meal.h"
#include"VegBurger.h"
#include "Coke.h"
#include "Pepsi.h"
#include "ChickenBurger.h"

class MealBuilder
{
public:
	MealBuilder();
	~MealBuilder();
	Meal prepateVegMeal();
	Meal prepateNonVegMeal();
};

