/*
 * Program to understand function overloading
 */

#include <iostream>
#include <string>
using namespace std;

// overload the add function
// function names are same
// but they differ in the argument types

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

string add(string a, string b) {
	return a + b;
}

int main() {

	int num = add(3, 4);
	double nd = add(3.5, 4.5);
	string st = add("abc", "cdf");

	cout << "int add: " << num << endl;
	cout << "double add: " << nd << endl;
	cout << "string add: " << st << endl;

	return 0;
}
