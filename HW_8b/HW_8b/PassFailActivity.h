// ===========================================================
// File: PassFailActivity.h - Contains the class PassFailActivity
// ===========================================================
#ifndef PASSFAILACTIVITY_H_
#define PASSFAILACTIVITY_H_

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
	double minPassingScore;				 // minimum passing score
public:
	PassFailActivity();					 // default constructor
	PassFailActivity(double mps);		 // overloaded constructor
	~PassFailActivity();				 // destructor
	void setMinPassingScore(double mps); // mps is passed from main() and assigned to minPassingScore
	double getMinPassingScore();		 // a value representing minPassingScore is returned to main
	char getLetterGrade() override;		 // redefinition of the function in GradedActivity
};


#endif