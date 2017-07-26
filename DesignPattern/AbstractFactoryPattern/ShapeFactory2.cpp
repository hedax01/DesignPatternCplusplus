#include "ShapeFactory2.h"



ShapeFactory2::ShapeFactory2()
{
}

Color * ShapeFactory2::getColor(int cl)
{
	return nullptr;
}

Shape * ShapeFactory2::getShape(int type)
{
	if (type == ShapeFactory2::CIRCLE) {
		return new Circle();
	}
	if (type == ShapeFactory2::RECTANGLE) {
		return new Rectangle();
	}
	if (type == ShapeFactory2::SQUARE) {
		return new Square();
	}

	return nullptr;
}


ShapeFactory2::~ShapeFactory2()
{
}
