#include "UnderGrad.h"

// constructor
UnderGrad::UnderGrad(int id, std::string name, int units, std::string level)
{
	this->id    = id;
	this->name  = name;
	this->units = units;
	this->level = level;
}

// destructor
UnderGrad::~UnderGrad() {}

// display id, name, units, and level
void UnderGrad::displayRecord()
{
	std::cout << std::left;
	std::cout << std::setw(12) << "ID: "    << id    << std::endl
			  << std::setw(12) << "Name: "  << name  << std::endl
			  << std::setw(12) << "Units: " << units << std::endl
			  << std::setw(12) << "Class: " << level << std::endl;
	std::cout << std::right;
}