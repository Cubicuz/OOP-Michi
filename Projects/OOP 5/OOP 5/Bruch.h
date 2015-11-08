#pragma once
class Bruch
{
private:
	int z, n;
public:
	Bruch(int, int);
	void operator*=(Bruch);
	friend Bruch operator*(int, const Bruch);
	friend Bruch operator*(const Bruch, int);
};