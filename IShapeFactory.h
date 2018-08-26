#pragma once
#include "IShape.h"
#include "ShapeEnum.cpp"

/*
fabryka, a jednocześnie singleton
*/

class IShapeFactory
{
private:
	IShapeFactory();
	IShapeFactory(const IShapeFactory &);
	IShapeFactory& operator=(const IShapeFactory&);
	virtual ~IShapeFactory();
public:
	static IShapeFactory getInstance();
	IShape* CreateShapeInstance(ShapeEnum a_eShape);
	bool IsFactoryChildren(IShape* a_oShapeObj);
	void Destroy();
};