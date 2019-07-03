/*
 * Print the name of the user along with hello world
 */

#include <iostream>
using namespace std;

void printHelloWorld(string name) {
	
	cout << "Hello " << name << "\n";
	return ;
}

int main () {

	// input the name from the user
	// cin (console input), instance of istream class (input stream)
	// uses stream extraction operator (>>) 
	// basically, the input from keyboard (standard input)
	// is extracted and stored in the memory

	// int val;
	// cin >> val ; // val is the storage where input will be stored

	string name;
	cout << "Please enter your name: ";
	cin >> name;

	printHelloWorld(name);

	// multiple cin statements can be clubbed
	// int val1, val2, val3;
	// cin >> val1;
	// cin >> val2;
	// cin >> val3;

	// You can instead write:
	// cin >> val1 >> val2 >> val3;
	return 0;
}
