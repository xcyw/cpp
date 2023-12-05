// ===========================================================
// ===========================================================
// File: PassFailActivity.cpp - Holds the function implementations
// specified in the PassFailActivity.h file.
// ===========================================================

#include "PassFailActivity.h"

 // default constructor
PassFailActivity::PassFailActivity()
{
	this->minPassingScore = 0;
}

// overloaded constructor
PassFailActivity::PassFailActivity(double mps)
{
	this->minPassingScore = mps;
}

// destructor
PassFailActivity::~PassFailActivity() {}

// mps is passed from main() and assigned to minPassingScore
void PassFailActivity::setMinPassingScore(double mps)
{
	this->minPassingScore = mps;
}

// a value representing minPassingScore is returned to main
double PassFailActivity::getMinPassingScore()
{
	return minPassingScore;
}

// redefinition of the function in GradedActivity
char PassFailActivity::getLetterGrade()
{
	if (score > minPassingScore)
	{
		return 'P';
	}
	return 'F';
}