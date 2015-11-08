#include "IntVector.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

IntVector::IntVector(unsigned int i) : length(i)
{
	ar = new int[i];
}

IntVector::~IntVector()
{
	delete ar;
}

unsigned int IntVector::size()
{
	return length;
}

int & IntVector::at(unsigned int i)
{
	if (i < length) {
		return ar[i];
	}
	cout << "index overflow" << endl;
	exit(1);
}

void IntVector::out()
{
	cout << "Gesamter Vektor:" << endl;
	for (int i = 0;i < length;i++) {
		cout << "Index:		" << i << "Value:		" << ar[i] << endl;
	}
}

