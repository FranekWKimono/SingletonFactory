#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	virtual ~Circle();
	double getArea();

	string getShapeName()
	{
		return "Circle";
	}
};
