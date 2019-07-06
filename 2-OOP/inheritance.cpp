/*
 * Program to understand inheritance in C++
 */

#include <iostream>
using namespace std;

class Shape2D {
private:
	int width;
	int height;
public:
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	void setHeight(int height) {
		this->height = height;
	}
};
// rectangle and triangle are to be inherited from Shape2D
// SYNTAX:
// class derivedClassName: access-specifier baseClassNames (separated by commas) {};

// public access specifier
// means that all public members of Shape => public of Rectangle
// all protected members of Shape (not any) => protected of Rectangle
class Rectangle: public Shape2D {
public:
	int getArea() {
		// the inherited getWidth() and getHeight() functions
		// can access the private data of shape class
		return getWidth() * getHeight();
	}
};

class Triangle: public Shape2D {
public:
	int getArea() {
		// assuming width = base
		return 0.5*getWidth()*getHeight();
	}
};
int main () {

	Rectangle r;
	r.setWidth(5);
	r.setHeight(5);
	cout << "Area of the rectangle is: " << r.getArea() << endl;

	Triangle t;
	t.setWidth(5);
	t.setHeight(10);
	cout << "Area of the triangle is: " << t.getArea() << endl;

	return 0;
}
