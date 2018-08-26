#pragma once
#include "IShapeFactory.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <list>


class IShapeFactory
{
	list<IShape*> creationList;

private:
	IShapeFactory();
	IShapeFactory(const IShapeFactory &);
	IShapeFactory& operator=(const IShapeFactory&);
	virtual ~IShapeFactory();
public:
	static IShapeFactory& getInstance()
	{
		static IShapeFactory* instance = NULL;
		if (!instance)
		{
			static IShapeFactory instance = new IShapeFactory();
		}
		return *instance;
	}

	IShape* CreateShapeInstance(ShapeEnum a_eShape)
	{
		if (a_eShape == circle) {
			Circle* wskshape = 0;
			Circle shape;
			wskshape = &shape;
			creationList.push_back(wskshape);
			IShape* iShape = wskshape;
			return iShape;
		}
		else if (a_eShape == triangle)
		{
			Triangle* wskshape = 0;
			Triangle shape;
			wskshape = &shape;
			creationList.push_back(wskshape);
			IShape* iShape = wskshape;
			return iShape;
		}
		else if (a_eShape == rectangle)
		{
			Rectangle* wskshape = 0;
			Rectangle shape;
			wskshape = &shape;
			creationList.push_back(wskshape);
			IShape* iShape = wskshape;
			return iShape;
		}
		else {
			cout << "nie ma takiej figury" << endl;
			return 0;
		}
	}

	bool IsFactoryChildren(IShape* a_oShapeObj) {
		bool found = (std::find(creationList.begin() , creationList.end(), a_oShapeObj) != creationList.end());
		return found;
	}

	void Destroy() {
		creationList.clear();
	}

};
