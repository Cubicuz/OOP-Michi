#pragma once
class Resistor : public Ohm
{
private:
	float res;
public:
	Resistor();
	virtual float ohm();
	void setRes(float);
};

