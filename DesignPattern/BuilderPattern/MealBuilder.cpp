#include "MealBuilder.h"



MealBuilder::MealBuilder()
{
}


MealBuilder::~MealBuilder()
{
}

Meal MealBuilder::prepateVegMeal()
{
	Meal meal = Meal();
	meal.addItem(new VegBurger());
	meal.addItem(new Coke());
	return meal;
}

Meal MealBuilder::prepateNonVegMeal()
{
	Meal meal = Meal();
	meal.addItem(new ChickenBurger());
	meal.addItem(new Pepsi());
	return meal;
}
