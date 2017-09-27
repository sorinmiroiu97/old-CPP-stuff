#include "Isosceles.h"

//Functions definitions

//Default constructor
Isosceles::Isosceles()
{
	base = 0;
}

//Overload constructor
Isosceles::Isosceles(int newBase, int newSideOne, int newHeight) 
	: Triangle(newHeight)
{
	base = newBase;
	sideOne = newSideOne;
	//height = newHeight; doar dc folosesc variabilele in protected in base class
}

//Destructor
Isosceles::~Isosceles()
{

}

//Accessor functions

int Isosceles::getBase() const
{
	return base;
}

int Isosceles::getSideOne() const
{
	return sideOne;
}

//Mutator functions

void Isosceles::setBase(int newBase)
{
	base = newBase;
}

void Isosceles::setSideOne(int newSideOne)
{
	sideOne = newSideOne;
}

int Isosceles::getPerimeter() const
{
	return ((2 * sideOne) + base);
}

void Isosceles::printInfo() const
{
	cout << endl << "Perimeter: " << getPerimeter() << endl;
	cout << "Area: " << getArea(base) << endl;
}