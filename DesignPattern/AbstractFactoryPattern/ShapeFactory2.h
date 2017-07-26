#pragma once
#include "AbstractFactory.h"
#include"..\DesignPattern\Circle.h"
#include"..\DesignPattern\Rectangle.h"
#include"..\DesignPattern\Square.h"

class ShapeFactory2 :
	public AbstractFactory
{
public:
	enum ShapeType
	{
		RECTANGLE,
		SQUARE,
		CIRCLE
	};
	ShapeFactory2();
	Color* getColor(int cl);
	Shape * getShape(int i);
	~ShapeFactory2();
};

