/*
 * Program to understand constructor overloading
 */

#include <iostream>
using namespace std;

class Matrix3x3 {
private:
	int mat[3][3];
public:
	// constructor
	Matrix3x3() {
		// set all values in mat to zero
		memset(mat, 0, sizeof(mat));
	}
	// constructor overloading
	Matrix3x3(int m[3][3]) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mat[i][j] = m[i][j];
			}
		}
	}
	void printMatrix() {
		cout << "Matrix data:\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << mat[i][j] << " ";
			}
			cout << "\n";
		}
	}
};

int main () {
	Matrix3x3 m1;
	m1.printMatrix();

	int m[3][3] = { {1, 2, 3}, 
			{4, 5, 6},
			{7, 8, 9} };
	Matrix3x3 m2(m);
	m2.printMatrix();
	return 0;
}
