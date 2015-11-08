#pragma once
class Parallel : public Ohm
{
private:
	Ohm *a, *b;
public:
	Parallel(Ohm *,Ohm *);
	virtual float ohm();
};

