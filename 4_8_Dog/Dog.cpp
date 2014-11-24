#include "Dog.h"


Dog::Dog(void) :age(0), weight(0)
{
}


Dog::~Dog(void)
{
}


Dog::Dog(int a,int w)
{
	age = a;
	weight = w;
}


int Dog::readAge()
{
	return age;
}


int Dog::readWeight()
{
	return weight;
}