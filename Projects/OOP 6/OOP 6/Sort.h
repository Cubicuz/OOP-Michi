#pragma once
template<class T>
class Sort
{
public:
	static void swapIt(T & a, T & b) {
		T h = a;
		a = b;
		b = h;
	};
	

};