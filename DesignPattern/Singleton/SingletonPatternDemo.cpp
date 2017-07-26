#include<iostream>
#include "SingleObject.h"


using namespace std;

int main(int argc, char** argv) {
	cout << "Hello World\n";
	SingleObject * obj = SingleObject::getInstance();
	obj->showMessage();
	cout << "this is id: " << obj->getID() << "\n";
	delete obj; //?????? ha ha
	SingleObject *obj2 = SingleObject::getInstance();
	cout << "this is obj2 id: " << obj2->getID() << "\n";

	
	return 1;
}