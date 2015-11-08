#include "Matrix.h"
#include <iostream>
using namespace std;

int main() {
	Matrix a(3, 4);
	

	a[1][2] = 15;
	for (int i = 0;i < a.getM();i++) {
		for (int j = 0;j < a.getN();j++) {
			cout << a[i][j] << " | ";
		}
		cout << endl;
	}

	return 0;
}