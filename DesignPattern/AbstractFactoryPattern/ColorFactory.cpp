#include "ColorFactory.h"



ColorFactory::ColorFactory()
{
}

Color* ColorFactory::getColor(int cl)
{
	if (cl == ColorFactory::BLUE) {
		return new Blue();
	}
	if (cl == ColorFactory::GREEN) {
		return new Green();
	}
	if (cl == ColorFactory::RED) {
		return new Red();
	}
	return nullptr;
}

Shape * ColorFactory::getShape(int i)
{
	return nullptr;
}


ColorFactory::~ColorFactory()
{
}
