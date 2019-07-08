/*
 * Program to understand operator overloading
 */

#include <iostream>
using namespace std;

class Box {
private:
	int length;
	int breadth;
	int height;
public:
	void setLength(int len) {
		length = len;
	}
	void setBreadth(int br) {
		breadth = br;
	}
	void setHeight(int h) {
		height = h;
	}
	int getVolume() {
		int vol = length*breadth*height;
		return vol;
	}
	// overload '+' operator to add two boxes
	// SYNTAX:
	// className operator + (const className &obj);
	Box operator + (const Box &b) {
		Box result;
		result.length = this->length + b.length;
		result.breadth = this->breadth + b.breadth;
		result.height = this->height + b.height;
		return result;
	}
	friend istream &operator >> (istream &cin, Box &b);
};

// if you were to overload + operator without creating a member function
// Box operator + (const Box &b1, const Box &b2) ;

// to overload input/output functions, need to create friend functions
istream &operator >> (istream &cin, Box &b) {
	cout << "Enter the length: ";
	cin >> b.length;
	cout << "Enter the breadth: ";
	cin >> b.breadth;
	cout << "Enter the height: ";
	cin >> b.height;
	return cin;
}

int main () {	
	
	Box b1, b2, b3;
	b1.setLength(5);
	b1.setBreadth(6);
	b1.setHeight(7);

	cout << "Box volume of b1: " << b1.getVolume() << endl;
	
	b2.setLength(3);
	b2.setBreadth(3);
	b2.setHeight(7);

	// b1 is invoking the + operator
	// b2 is the object being passed as argument to '+' function
	b3 = b1 + b2;
	cout << "Box volume of b3: " << b3.getVolume() << endl;

	Box b4;
	cin >> b4;
	cout << "Box b4's volume is: " << b4.getVolume() << endl;
	return 0;
}
