/*
 * Creating our own classes 
 */

#include <iostream>
using namespace std;

// a class is basically used to create our own data types
// it overcomes the limitations in the structure in C
// we can have functions defined within the class
// to perform computations on the variables of the class (instances/objects)

class Box {
// access specifiers, public means that the data
// can be accessed outside the class using the dot ('.') notation
public: 
	// member data
	int length;
	int breadth;
	int height;
	// member functions
	int volume() {
		int res = length*breadth*height;
		return res;
	}
} box1;
// box1 is an object of type box (defined just after class declaration)

int main () {
	box1.length = 3;
	box1.breadth = 5;
	box1.height = 10;
	cout << "Volume of box1 is: " << box1.volume() << endl;

	// define box2 as another object of type box
	Box box2;

	// the values of box2 member data before assigning
	cout << "Box 2 dimensions before assignment: {"
	     << box2.length << ", " << box2.breadth << ", " << box2.height << "}\n";

	box2.length = 1;
	box2.breadth = 2;
	box2.height = 10;
	// class functions can also be accessed using the dot ('.') notation
	cout << "Volume of box2 is: " << box2.volume() << endl;
	return 0;
}
