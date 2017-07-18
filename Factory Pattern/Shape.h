#pragma once
#include<iostream>
class Shape
{
public:
	Shape();
	virtual void draw() = 0;
	virtual ~Shape();
};

