/*
 * Program to demonstrate writing to a file
 */

#include <iostream>
#include <fstream>

using namespace std;

int main () {

	ofstream fout;
	fout.open("output.txt"); // by default: out mode

	fout << "Writing sample text to file";

	// good practice to close the opened files at the end
	fout.close();
	return 0;
}
