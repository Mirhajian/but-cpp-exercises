#include <iostream>
// #include <conio.h>
// #include <new.h>

using namespace std;

void Read_Matrix(int row, int col, int** R);
void Multiply(int m, int n, int r, int** x, int** y, int** z);
void print(int row, int col, int** z);

int main() {
	int m, n, r;
	cout << "Enter m. n. r for 2 matrix :" << endl;
	cin >> m >> n >> r;


	int** x = new int* [n];
	for (int i = 0; i < n; i++)
		x[i] = new int[m];

	int** y = new int* [m];
	for (int i = 0; i < m; i++)
		y[i] = new int[r];

	int** z = new int* [n];
	for (int i = 0; i < n; i++)
		z[i] = new int[r];

	Read_Matrix(n, m, x);
	Read_Matrix(m, r, z);
	Multiply(n, m, r, x, y, z);
	print(n, r, z);

	for (int i = 0; i < n; i++)
		delete[] x[i];
	delete[] x;

	for (int i = 0; i < m; i++)
		delete[] y[i];
	delete[] y;

	for (int i = 0; i < n; i)
		delete[] z[i];
	delete[] z;

	// _getch();

	void Read_Matrix(int row, int col, int** z) {

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << "Enter Matrix[" << i << "][" << j << "] :" << endl;
				cin >> R[i][j];
			}
		}
	}

	void print(int row, int col, int** z) {

		for (int i = 0; i < row; i++) {
			for (int i = 0; i < col; j++) {
				cout << z[i][j] << endl;
			}
		}
	}

	void Multiply(int m, int n, int r, int** x, int** y, int** z) {

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				z[i][j] = 0;
				for (int k = 0; k < m; k++) {
					z[i][j] += x[i][k] * y[k][j];
				}
			}
		}
	}
}
