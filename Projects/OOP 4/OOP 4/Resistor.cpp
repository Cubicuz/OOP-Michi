#include "Ohm.h"
#include "Resistor.h"



Resistor::Resistor()
{
}


Resistor::~Resistor()
{
}

float Resistor::ohm()
{
	return r;
}

void Resistor::setRes(float f)
{
	r = f;
}
