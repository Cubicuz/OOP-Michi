#pragma once
class Point
{
private:
	double x, y;
public:
	Point();
	Point(double, double);
	void operator+=(Point);
	bool operator==(Point);
};

