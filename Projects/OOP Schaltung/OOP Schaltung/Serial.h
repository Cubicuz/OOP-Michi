#pragma once
class Serial : public Ohm
{
private:
	Ohm *a, *b;
public:
	Serial(Ohm*, Ohm*);
	virtual float ohm();

};
