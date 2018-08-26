#include "Triangle.h"

Triangle::Triangle()
{
}

Triangle::~Triangle()
{
}

double Triangle::getArea(int a, int h)
{
	double area = 0.5*a*h;
	return area;
}