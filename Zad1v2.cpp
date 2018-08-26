// Zad1v2.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "IShapeFactory.h"
#include "IShape.h"



int main()
{
	IShapeFactory::getInstance().CreateShapeInstance(triangle);
	system("PAUSE");
	return 0;
}

