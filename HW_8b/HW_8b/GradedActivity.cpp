// ===========================================================
// File: GradedActivity.cpp - Holds the function implementations specified
// in the GradedActivity.h file.
// ===========================================================

#include "GradedActivity.h"

// default constructor
GradedActivity::GradedActivity()
{
	this->score = 0;
}

// overloaded constructor
GradedActivity::GradedActivity(double testScore)
{
	this->score = testScore;
}

// destructor
GradedActivity::~GradedActivity() {}

// testScore is passed from main() and assigned to score
void GradedActivity::setScore(double testScore)
{
	this->score = testScore;
}

// score is returned to main()
double GradedActivity::getScore()
{
	return score;
}

// letter grade is returned to main()
char GradedActivity::getLetterGrade()
{
	if (score >= 90)
	{
		return 'A';
	}
	else if (score >= 80)
	{
		return 'B';
	}
	else if (score >= 70)
	{
		return 'C';
	}
	else if (score >= 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}