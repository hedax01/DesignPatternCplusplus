#pragma once
#include "AbstractFactory.h"
#include "ColorFactory.h"
#include"ShapeFactory2.h"

class FactoryProducer
{
public:
	enum FP
	{
		SHAPE,
		COLOR
	};
	FactoryProducer();
	static AbstractFactory * getFactory(int fp);
	
	~FactoryProducer();
};

