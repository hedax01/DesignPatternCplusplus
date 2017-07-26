#include "ShapeFactory.h"



ShapeFactory::ShapeFactory()
{
}

Shape * ShapeFactory::getShape(ShapeType type)
{
	if (type == ShapeFactory::CIRCLE) {
		return new Circle();
	}
	if (type == ShapeFactory::RECTANGLE) {
		return new Rectangle();
	}

	if (type == ShapeFactory::SQUARE) {
		return new Square();
	}
	return 0;
}


ShapeFactory::~ShapeFactory()
{
}
