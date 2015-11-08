#include "IntVector.h"
#include <iostream>
using namespace std;


IntVector::IntVector(unsigned int i)
{
	vec = new int[i];
	len = i;
}

IntVector::IntVector(const IntVector & v)
{
	vec = new int[v.len];
	len = v.len;
	for (unsigned int i = 0;i < v.len;i++) {
		vec[i] = v.vec[i];
	}
}


IntVector::~IntVector()
{
	delete(vec);
}

unsigned int IntVector::size()
{
	return len;
}

int & IntVector::operator[](unsigned int i)
{
	if (i < len) {
		return vec[i];
	}
	cout << "index overflow";
	exit(1);
}

IntVector & IntVector::operator=(const IntVector v)
{
	if (len == v.len) {
		for (unsigned int i = 0; i < len;i++) {
			vec[i] = v.vec[i];
		}
	}
	else if (len < v.len) {
		vec = new int[v.len];
		len = v.len;
		for (unsigned int i = 0; i < len;i++) {
			vec[i] = v.vec[i];
		}
	}
	else if (len > v.len) {
		for (unsigned int i = 0;i < v.len;i++) {
			vec[i] = v.vec[i];
		}
	}
}

void IntVector::out()
{
	for (unsigned int i = 0;i < len;i++) {
		cout << vec[i] << endl;
	}
}
