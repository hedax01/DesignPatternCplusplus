#pragma once
#include<iostream>
class SingleObject
{
public:
	~SingleObject();
	static SingleObject * getInstance();
	void showMessage();
	int getID();
private:
	SingleObject();
	int id = 0;
;
	
};

