#pragma once
#include "AbstractFactory.h"
#include"..\DesignPattern\Shape.h"
#include"Color.h"
#include"Red.h"
#include"Green.h"
#include"Blue.h"

class ColorFactory : public AbstractFactory
{
public:
	enum Colors
	{
		RED,
		GREEN,
		BLUE
	};
	ColorFactory();
	Color* getColor(int cl);
	Shape * getShape(int i);
	~ColorFactory();
};

