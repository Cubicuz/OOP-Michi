#include "CommonVector.h"
#include <iostream>
using namespace std;

int main() {

	CommonVector<int,50> v;
	cout << v[0];
	v[0] = 50;
	cout << v[0];




	return 0;
}