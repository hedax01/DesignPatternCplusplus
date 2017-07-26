#include<iostream>
#include"ColorFactory.h"
#include "AbstractFactory.h"
#include "FactoryProducer.h"

using namespace std;

int main(int argv, char** argc) {
	cout << "hello\n";

	// Get Shape Factory
	AbstractFactory* shapeFactory = FactoryProducer::getFactory(FactoryProducer::SHAPE);
	
	//Get an object of Shape Circle
	Shape * shape1 = shapeFactory->getShape(ShapeFactory2::CIRCLE);
	shape1->draw();

	Shape * shape2 = shapeFactory->getShape(ShapeFactory2::SQUARE);
	shape2->draw();

	Shape * shape3 = shapeFactory->getShape(ShapeFactory2::RECTANGLE);
	shape3->draw();
	shape1->draw();

	// get Color Factory
	AbstractFactory* colorFactory = FactoryProducer::getFactory(FactoryProducer::COLOR);

	//get a Color
	Color* color1 = colorFactory->getColor(ColorFactory::BLUE);
	color1->fill();

	Color* color2 = colorFactory->getColor(ColorFactory::GREEN);
	color2->fill();

	Color* color3 = colorFactory->getColor(ColorFactory::RED);
	color3->fill();
	return 1;
}