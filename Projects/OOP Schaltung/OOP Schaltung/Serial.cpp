#include "Ohm.h"
#include "Serial.h"



Serial::Serial(Ohm * varA, Ohm * varB)
{
	a = varA;
	b = varB;
}


float Serial::ohm()
{
	return (a->ohm() + b->ohm());
}
