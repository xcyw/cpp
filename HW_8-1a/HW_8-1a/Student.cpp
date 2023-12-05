#include "Student.h"

// constructor
Student::Student()
{
	this->id    = 0;
	this->name  = "";
	this->units = 0;
}                             

// overload constructor
Student::Student(int id, std::string name, int units)
{
	this->id    = id;
	this->name  = name;
	this->units = units;
}

// destructor
Student::~Student() {}

// sets id
void Student::setID(int id)
{
	this->id = id;
}

// sets name
void Student::setName(std::string name)
{
	this->name = name;
}

// sets units
void Student::setUnits(int units)
{
	this->units = units;
}

//// displays id, names, and units
//void Student::displayRecord()
//{
//	std::cout << std::left;
//	std::cout << std::setw(12) << "ID: "    << id    << std::endl
//		   	  << std::setw(12) << "Name: "  << name  << std::endl
//			  << std::setw(12) << "Units: " << units << std::endl;
//	std::cout << std::right;
//}