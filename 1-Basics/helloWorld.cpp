/*
 * Hello world program in C++
 */

#include <iostream>

// using is a preprocessor directive
// compiler will prepend 'name_of_namespace::' (std:: here)
// to every function of that namespace used here

using namespace std;

// namespace is kind of a scope of names declared in that namespace
// you can have same named functions, variables, classes, ...
// in different namespaces
// and use a particular one amongst those by using the appropriate namespace
int main () {
	
	// console output, print your output to stdout
	
	// since we are using namespace std,
	// we can skip writing "std::" before the function
	// in the namespace std
	
	// std::cout << "Hello world";
	
	// "<<" is stream insertion operator
	// it inserts whatever follows into into a stream (sequence of bytes)
	// and that stream is then display on the output (stdout => standard output stream)
	cout << "Hello world\n";

	/*

	// multiple cout statements can be clubbed by having multiple
	// stream insertion operators in between

	cout << "Hello ";
	cout << "world";
	cout << "\n";

	// the three lines above and the line below are equivalent
	cout << "Hello" << " world" << "\n";
	
	*/
	return 0;
}
