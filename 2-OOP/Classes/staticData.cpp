/*
 * Program to understanding static member data/functions
 * of a class
 */

#include <iostream>
using namespace std;

class Car {
// by default, members are private
	int price;
	string model;
	string color;
	string company;
	// counter is a static variable
	// used to count how many cars have been produced
public:
	// counter should be public to make it accessible outside
	static int counter;
	void setPrice(int p) {
		price = p;
	}
	void setModel(string model) {
		this->model = model;
	}
	void setColor(string color) {
		this->color = color;
	}
	void setCompany(string company) {
		this->company = company;
	}

	// static function
	// can only access static member data
	static int getCount() {
		return counter;
	}

	Car() {
		price = 100000;
		model = "A1";
		color = "Black";
		company = "Maruti";
		// increment the counter
		counter ++;
	}
};

// initialize the static variable
int Car:: counter = 0;
int main () {
	Car c1, c2, c3;
	// cout << "No. of cars: " << Car::counter << endl;
	
	cout << "No. of cars: " << Car::getCount() << endl;
	return 0;
}






