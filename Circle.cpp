#include "Circle.h"

Circle::Circle()
{
}

Circle::~Circle()
{
}

double Circle::getArea(int r)
{
	double area = 3.14*r*r;
	return area;
}