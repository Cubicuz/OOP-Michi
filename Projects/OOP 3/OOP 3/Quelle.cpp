#include "IntVector.h"
#include "Iterator.h"
#include <iostream>
using namespace std;

int main() {
	IntVector vec(5);
	for (int i = 0;i < 5;i++) {
		vec.at(i) = i;
	}
	vec.at(1) = 1001;
	cout << vec.at(1) << '\n';
	Iterator it(&vec);
	int *el;
	while ((el = it.next()) != NULL) {
		cout << *el << endl;
	}
	
	return 0;
}