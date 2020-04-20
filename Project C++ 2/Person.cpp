#include "Person.h"

Person::Person(std::string aName)
	:name(aName)
{
	
}

Person::~Person()
{
	name = "jhon";
}

std::string Person::GetName()
{
	return name;
}
