#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	virtual ~Rectangle();
	double getArea();

	string getShapeName()
	{
		return "Rectangle";
	}
};