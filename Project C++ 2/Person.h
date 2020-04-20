#pragma once
#include <list>
#include <iostream>
class Person
{
public:
	Person(std::string aName);
	~Person();
	std::string GetName();

private:
	std::string name;
};

