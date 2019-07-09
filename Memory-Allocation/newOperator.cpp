/*
 * Program to understand new and delete operators in C++
 */

#include <iostream>
using namespace std;

class Matrix {
	private:
		int **matrix;
		int rows;
		int columns;
	public:
		Matrix(int r, int c) {
			cout << "Creating the matrix of size: " << r << "x" << c << "\n";
			rows = r;
			columns = c;
			// matrix = new int[rows][columns];
			matrix = new int*[rows];
			for (int i = 0; i < rows; i ++) {
				matrix[i] = new int[columns];
			}
		}
		void printMatrix() {
			cout << "Printing the matrix: \n";
			for (int i = 0; i < rows; i ++) {
				for (int j = 0; j < columns; j ++) {
					cout << matrix[i][j] << " ";
				}
				cout << endl;
			}
		}
};

int main () {
	// new operator allocates memory from the heap memory
	// and returns the address of the space allocated

	// more powerful than malloc in C
	// because it constructs the object rather 
	// than just allocating the memory, that will be clear when you use it with classes
	
	// single integer
	int *a = new int;
	*a = 10;
	cout << "Value pointed by a: " << *a << endl;

	// array
	int *b = new int[5];
	for (int i = 0; i < 5; i ++) {
		b[i] = (i + 1);
	}
	cout << "Array of size 5 allocated dynamically: \n";
	for (int i = 0; i < 5; i ++) {
		cout << b[i] << " ";
	}
	cout << endl;
	
	// a new matrix object will also be constructed
	// using the default constructor
	Matrix *m = new Matrix(3, 4);

	// make sure to delete the allocated memory
	delete(a);
	delete[](b);
	delete(m);
	return 0;
}
