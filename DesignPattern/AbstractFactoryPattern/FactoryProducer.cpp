#include "FactoryProducer.h"



FactoryProducer::FactoryProducer()
{
}

AbstractFactory * FactoryProducer::getFactory(int fp)
{
	if (fp == FactoryProducer::COLOR) {
		return new ColorFactory();
	}
	if (fp == FactoryProducer::SHAPE) {
		return new ShapeFactory2();
	}
	return nullptr;
}


FactoryProducer::~FactoryProducer()
{
}
