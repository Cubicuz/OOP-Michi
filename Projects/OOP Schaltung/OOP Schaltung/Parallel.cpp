#include "Ohm.h"
#include "Parallel.h"


Parallel::Parallel(Ohm * varA, Ohm * varB)
{
	a = varA;
	b = varB;
}

float Parallel::ohm()
{
	return (a->ohm() * b->ohm())/(a->ohm() + b->ohm());
}
