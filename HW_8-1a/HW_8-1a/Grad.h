#ifndef GRAD_H_
#define GRAD_H_

#include "Student.h"

class Grad : public Student
{
protected:
	std::string degree;
public:
	Grad(int id,    std::string name,
		 int units, std::string degree); // constructor
	~Grad();							 // destructor
	void displayRecord();				 // display id, name, units, and degree
};

#endif 