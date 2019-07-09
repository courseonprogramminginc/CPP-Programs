/*
 * Program to demonstrate reading of a file in C++
 */
#include <iostream>
#include <fstream> // contains ifstream, ofstream and fstream classes

using namespace std;
int main () {
	
	ifstream fin;
	// fin.open("input.txt", ios::in);
	fin.open("input.txt"); // by default: input mode

	// while you reach the end of file
	// fin.eof() denotes end of file
	string s;
	cout << "File contents are:\n";
	while (!fin.eof()) {
		// read file word by word
		fin >> s;
		cout << s << "\n";
	}
	fin.close();
	return 0;
}
