/*
 * Two ways to define the member functions
 * of a class
 */

#include <iostream>
using namespace std;

class Box {
public:
	// member data
	int length;
	int breadth;
	int height;
	// member functions
	// one way: we can define the entire function here
	// or we can just have the declaration here
	
	/*
	int getVolume() {
		int vol = length*breadth*height;
		return vol;
	}
	*/

	// second way: only declare the function here
	int getVolume();
	void setLength(int len) {
		length = len;
	}
	void setBreadth(int breadth) {
		// this pointers, refers to the object
		// which is calling the member function
		
		// use the arrow notation 
		this->breadth = breadth; // (*this).breadth = breadth
		// above line sets the breadth for the 
		// object which called this member function
	}
	void setHeight(int height) {
		this->height = height;
	}
} box1;

// defining a function of the class outside the class
// NOTE: it must be having a declaration within the class
// SYNTAX: return_type className:: functionName(function_arguments) {...}
// :: is known as the scope resolution operator
int Box::getVolume() {
	// we can access the member data for the class here also
	int vol = length*breadth*height;
	return vol;
}

int main () {
	box1.setLength(3);
	box1.setBreadth(4);
	box1.setHeight(5);
	cout << "Volume of the box is: " << box1.getVolume() << endl;
	return 0;
}

