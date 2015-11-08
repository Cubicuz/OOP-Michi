#include "Point.h"



Point::Point() : x(0),y(0)
{
}

Point::Point(double X, double Y) : x(X),y(Y)
{
}


void Point::operator+=(Point p)
{
	x += p.x;
	y += p.y;
}

bool Point::operator==(Point p)
{
	return ((x == p.x) && (y == p.y));
}
