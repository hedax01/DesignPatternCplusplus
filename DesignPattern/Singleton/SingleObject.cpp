#include "SingleObject.h"



SingleObject::SingleObject()
{
	id++;
}


SingleObject::~SingleObject()
{
}

SingleObject * SingleObject::getInstance()
{
	static SingleObject* instance = new SingleObject();
	//How can delete instance pointer?????!!!!!!
	return instance;
}

void SingleObject::showMessage()
{
	std::cout << "show massage\n";
}

int SingleObject::getID()
{
	return id;
}
