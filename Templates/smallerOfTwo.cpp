/*
 * Program to understand templates in C++
 */

#include <iostream>
using namespace std;

// typename T denotes that 'T' is used to refer to 
// the general type 
// general function
template <typename T> 
T smallerOfTwo(T a, T b) {
	if (a < b) {
		return a;
	}
	return b;
}

int main () {

	int a = 3, b = 4;
	cout << "Smaller of 3 and 4: " << smallerOfTwo(a, b) << endl;
	
	float c = 3.4, d = 1.3;
	cout << "Smaller of 3.4 and 1.3: " << smallerOfTwo(c, d) << endl;
	return 0;
}
