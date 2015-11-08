#include "Ohm.h"
#include "Resistor.h"



Resistor::Resistor()
{
}

float Resistor::ohm()
{
	return res;
}

void Resistor::setRes(float r)
{
	res = r;
}
