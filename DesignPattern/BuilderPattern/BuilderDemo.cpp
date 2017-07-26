#include<iostream>
#include "MealBuilder.h"
#include"Meal.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "Hello world\n";

	MealBuilder mealBuilder = MealBuilder();
	Meal vegMeal = mealBuilder.prepateVegMeal();
	cout << "Ver Meal\n";
	vegMeal.showItem();
	cout << "total Cost: " <<vegMeal.getCost() << "\n";

	Meal nonVegMeal = mealBuilder.prepateNonVegMeal();
	cout << "\nNonVer Meal\n";
	nonVegMeal.showItem();
	cout << "total Cost: " << nonVegMeal.getCost() << "\n";
	return 1;
}