#include "Ohm.h"
#include "Resistor.h"
#include "Parallel.h"
#include "Serial.h"
#include <iostream>
using namespace std;


int main() {
	Resistor r1, r2, r3;
	Parallel par(&r1, &r2);
	Serial ser(&par, &r3);
	r1.setRes(100.0);
	r2.setRes(200.0);
	r3.setRes(300.0);
	cout << "Netzwiderstand: " << ser.ohm() << " Ohm" << endl;
	getchar();
	return 0;
}