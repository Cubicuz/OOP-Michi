#include "IntVector.h"
#include <iostream>
using namespace std;

int main() {
	
	IntVector a(5);

	a.at(0) = 13;
	a.at(3) = 1;
	cout << a.at(3) << endl;

	Iterator (&a);



	return 0;
}