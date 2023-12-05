#include "Grad.h"

// constructor
Grad::Grad(int id, std::string name, int units, std::string degree)
{
	this->id     = id;
	this->name   = name;
	this->units  = units;
	this->degree = degree;
}

// destructor
Grad::~Grad() {}

// display id, name, units, and degree
void Grad::displayRecord()
{
	std::cout << std::left;
	std::cout << std::setw(12) << "ID: "     << id     << std::endl
	          << std::setw(12) << "Name: "   << name   << std::endl
			  << std::setw(12) << "Units: "  << units  << std::endl
			  << std::setw(12) << "Degree: " << degree << std::endl;
	std::cout << std::right;
}