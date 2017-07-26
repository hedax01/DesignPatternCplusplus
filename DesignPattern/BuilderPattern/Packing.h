#pragma once
#include<string>
class Packing
{
public:
	Packing();
	~Packing();
	virtual std::string pack() = 0;
};

