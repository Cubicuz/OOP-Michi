#pragma once
class Parallel : public Ohm
{
private:
	Ohm *r1, *r2;
public:
	Parallel(Ohm*,Ohm*);
	~Parallel();
	float ohm();
};

