/*
 * Program to understand polymorphism
 */

#include <iostream>
using namespace std;

class Shape {
protected:
	int width;
	int height;
public:
	// constructor or in general functions
	// can have default arguments
	Shape(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	virtual void area() {
		cout << "Parent class area called!" << endl;
	}
};

class Rectangle: public Shape {
public:
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {}

	// polymorphism
	// area function is also defined in the base class
	void area() {
		cout << "Rectangle class area: " << width*height << endl;
	}
};

int main () {

	Shape *shape;
	Rectangle r(10, 20);
	shape = &r;

	// this will call the area() function of Shape class
	// but we want it to call area() function of Rectangle class
	shape->area();
	
	// static binding / early binding
	// the call to area() of Shape is fixed at compilation time itself

	// to call area() of Rectangle
	// define area() function as virtual function in Shape class
	// it tells the compiler not to do static linkage
	return 0;
}
