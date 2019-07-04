/*
 * Program to understand constructors in C++
 */

#include <iostream>
using namespace std;

class Employee {
private:
	int baseSalary;
	int incentive;
public:
	// constructor is always called at the time a new object is created
	// it is used to assign some initial values to the object's data
	// it does not have any return type => NOT EVEN void
	// its name should be same as the CLASS NAME

	Employee() {
		// baseSalary
		baseSalary = 10000;
		incentive = 0;
		cout << "A new BASIC employee has joined!\n";
	}

	// parametrized constrctor takes in some parameters
	// so they can be used to assigne initial values to some attributes (member data)
	
	/*
	Employee(int base, int inc) {
		baseSalary = base;
		incentive = inc;
		cout << "New employee with base salary: " << baseSalary
		     << " and incentive: " << incentive << endl;
	}
	*/
	
	// identical to the one above in the comments
	Employee(int base, int inc): baseSalary(base), incentive(inc) {
		cout << "New employee with base salary: " << baseSalary
		     << " and incentive: " << incentive << endl;
	}

	// to use this above constructor, the object has to be declared with the paramters
	// Employee e1(200000, 1000);

	// also one class can have multiple constructors
	// which one will be used depends upon the object being constructed
	// this is where polymorphism comes into picture
	// having MULTIPLE FUNCTIONS WITH THE SAME NAME
};

int main () {

	Employee e1;
	// the output will be: "A new emplyee has been joined!\n"
	// So, the constrctor is automatically called whenever a new object is created
	
	// the above will use constructor without arguments

	Employee e2(20000, 1000);
	// this will use parameterized constructor
	return 0;
}


