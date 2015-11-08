#pragma once
class Beeper
{
private:
	static Beeper * b;
	unsigned int freq, dur;
	Beeper(unsigned int, unsigned int);
public:
	static Beeper* create(unsigned int, unsigned int);
	~Beeper();
	void beep();
};

