#include "Bruch.h"



Bruch::Bruch(int N, int Z):n(N),z(Z)
{
}

void Bruch::operator*=(Bruch b)
{
	z *= b.z;
	n *= b.n;
}

Bruch operator*(int i, Bruch b) {
	return Bruch(i * b.z, b.n);
}

Bruch operator*(Bruch b, int i) {
	return Bruch(i * b.z, b.n);
}
