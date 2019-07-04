/*
 * Destructor in classes in c++
 */

#include <iostream>
using namespace std;

class Matrix {
private:
	int rows;
	int columns;
	int **matrix;
public:
	Matrix() {
		rows = 3;
		columns = 3;
		matrix = (int **) malloc (rows*sizeof(int *));
		for (int i = 0; i < 3; i ++) {
			matrix[i] = (int *) malloc(columns*sizeof(int));
		}
		int val = 1;
		for (int i = 0; i < rows; i ++) {
			for (int j = 0; j < columns; j ++) {
				matrix[i][j] = val;
				val ++;
			}
		}
		// print the matrix
		cout << "Printing the matrix created: " << endl;
		for  (int i = 0; i < rows; i ++) {
			for (int j = 0; j < columns; j ++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	// syntax for destructors is:
	// ~(tilde sign) followed by CLASS NAME and then ()
	// no paramters can be passed in a destructor
	~Matrix() {
		// destructor is basically called when the object goes out of scope
		// i.e. if the object is declared in main function, so after we return from it
		free(matrix);
		rows = 0;
		columns = 0;
		cout << "Freed up memory occupied by matrix!" << endl;
	}
}; // make sure to end the class declaration with a closing brace followed by semicolon

int main () {

	Matrix m;
	return 0;
}
