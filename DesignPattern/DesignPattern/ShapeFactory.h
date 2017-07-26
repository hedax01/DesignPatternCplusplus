#pragma once
#include"Shape.h"
#include"Rectangle.h"
#include"Square.h"
#include"Circle.h"
#include<string>

class ShapeFactory
{
public:
	enum ShapeType
	{
		CIRCLE,
		SQUARE,
		RECTANGLE
	};

	ShapeFactory();
	//use getShape method to get object of type shape
	Shape*  getShape(ShapeType type);
	~ShapeFactory();
};

