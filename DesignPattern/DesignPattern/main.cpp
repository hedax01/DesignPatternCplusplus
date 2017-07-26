#include<iostream>
#include"Shape.h"
#include"ShapeFactory.h"

using namespace std;

int main(int argv, char** argc) {
	cout << "hello world\n";
	ShapeFactory* factory = new ShapeFactory();

	Shape * shape1 = factory->getShape(ShapeFactory::CIRCLE);
	shape1->draw();

	Shape * shape2 = factory->getShape(ShapeFactory::RECTANGLE);
	shape2->draw();

	Shape * shape3 = factory->getShape(ShapeFactory::SQUARE);
	shape3->draw();
	
	delete shape1, shape2, shape3;	
	return 0;
}