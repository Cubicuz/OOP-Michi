#include "Ohm.h"
#include "Parallel.h"



Parallel::Parallel(Ohm * o1, Ohm * o2) : r1(o1),r2(o2)
{
}


Parallel::~Parallel()
{
}

float Parallel::ohm()
{
	return (r1->ohm() * r2->ohm())/(r1->ohm() + r2->ohm());
}
