#pragma once
#include "Point.h"


class Line
{
private:
	Point a, b;
public:
	Line();
	Line(Point, Point);
	void operator+=(Point);
	bool operator==(Line);
};

