#pragma once

#include "stdafx.h"
#include <string>
using namespace std;

class IShape {

public:

	virtual double getArea() = 0;

	virtual string  getShapeName() = 0;

};
