#include <Windows.h>
#include "Beeper.h"


b = nullptr;

Beeper::Beeper(unsigned int f, unsigned int d) :freq(f),dur(d)
{
}


Beeper * Beeper::create(unsigned int f, unsigned int d)
{
	if (b == nullptr) {
		b = &Beeper(f, d);
	}
	return b;
}

Beeper::~Beeper()
{
}

void Beeper::beep()
{
	Beep(freq, dur);
}
