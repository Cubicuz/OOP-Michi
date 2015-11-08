#pragma once
class Resistor : public Ohm
{
private:
	float r;
public:
	Resistor();
	~Resistor();
	float ohm();
	void setRes(float);
};

