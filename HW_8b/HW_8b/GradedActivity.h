// ===========================================================
// File: GradedActivity.h - Holds the GradedActivity class specification.
// ===========================================================

#ifndef GRADEDACTIVITY_H_
#define GRADEDACTIVITY_H_

#include <iostream>
#include <iomanip>

class GradedActivity
{
protected:
	double score;					  // student's test score

public:
	GradedActivity();				  // default constructor
	GradedActivity(double testScore); // overloaded constructor
	~GradedActivity();				  // destructor
	void setScore(double testScore);  // testScore is passed from main() and assigned to score
	double getScore();				  // score is returned to main()
	virtual char getLetterGrade();	  // letter grade is returned to main()
};

#endif