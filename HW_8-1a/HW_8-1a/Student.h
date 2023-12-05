#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <iomanip>

class Student
{
protected:
	int id;
	int units;
	std::string name;
public:
	Student();									  // constructor
	Student(int id, std::string name, int units); // overload constructor
	~Student();									  // destructor
	void setID(int id);							  // sets id
	void setName(std::string name);			  	  // sets name
	void setUnits(int units);					  // sets units
	virtual void displayRecord() = 0;		      // pure virtual function
};

#endif 