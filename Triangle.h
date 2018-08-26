#pragma once
#include "IShape.h"

class Triangle : public IShape
{
public:
	Triangle();
	virtual ~Triangle();
	double getArea();

	string getShapeName()
	{
		return "Triangle";
	}
};