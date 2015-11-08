#include "Line.h"



Line::Line()
{
	a = Point();
	b = Point(1, 1);
}


Line::Line(Point A, Point B) :a(A),b(B)
{

}


void Line::operator+=(Point p)
{
	a += p;
	b += p;
}

bool Line::operator==(Line l)
{
	return ((a == l.a) && (b == l.b));
}
