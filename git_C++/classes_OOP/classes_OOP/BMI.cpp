//Functions Definitions

#include"BMI.h"

BMI::BMI()
{
	//newname=" "; in C++ nu trebuie sa initializez un string ca fiind nul
	//in C++ un  string  se initializeaza singur ca fiind nul
	//deci doar celelalte le initializez cu 0, ca fiind nule
	newheight = 0;
	newweight = 0.0;
}

BMI::BMI(string name, int height, double weight)
{
	newname = name;
	newheight = height;
	newweight = weight;
}

BMI::~BMI()
{

}

string BMI::getname() const
{
	return newname;
}

int BMI::getheight() const
{
	return newheight;
}

double BMI::getweight() const
{
	return newweight;
}

void BMI::setname(string name)
{
	newname = name;
}

void BMI::setheight(int height)
{
	newheight = height;
}

void BMI::setweight(double weight)
{
	newweight = weight;
}

double BMI::calculateBMI() const
{
	return ((newweight * 703) / (newheight * newheight));
}