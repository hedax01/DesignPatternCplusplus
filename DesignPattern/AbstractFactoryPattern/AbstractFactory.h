#pragma once
#include"Color.h"
#include"..\DesignPattern\Shape.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual Color* getColor(int i) = 0;
	virtual Shape * getShape(int i) = 0;
	~AbstractFactory();
};

