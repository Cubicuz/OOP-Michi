#include <iostream>
using namespace std;

void swap(int * & a, int * & b) {
	int *h = a;
	a = b;
	b = h;
}

int& at(int* vec, unsigned len, unsigned i) {
	if (i >= len) {
		cout << "index overflow";
		exit(1);
	}
	return vec[i];
}

int main() {

	const int LEN = 5;
	int vec[LEN] = { 0, 1, 2, 3, 4 };
	at(vec, LEN, 1) = 1001;
	cout << at(vec, LEN, 1) << '\n';
	cout << at(vec, LEN, 5) << '\n';
	return 0;
}