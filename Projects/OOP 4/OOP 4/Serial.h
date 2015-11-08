#pragma once
#include "Ohm.h"
class Serial : public Ohm
{
private:
	Ohm *r1, *r2;
public:
	Serial(Ohm *o1, Ohm *o2) : r1(o1), r2(o2) {};
	~Serial() {};
	float ohm() { return r1->ohm() + r2->ohm(); }
};

