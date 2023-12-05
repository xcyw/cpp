#ifndef UNDERGRAD_H_
#define UNDERGRAD_H_

#include "Student.h"

class UnderGrad : public Student
{
protected:
	std::string level;
public:
	UnderGrad(int id,    std::string name,
			  int units, std::string level); // constructor
	~UnderGrad();                            // destructor
	void displayRecord();                    // display id, name, units, and level
};

#endif 