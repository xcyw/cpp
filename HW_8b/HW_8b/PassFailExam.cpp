// ===========================================================
// File: PassFailExam.cpp - Holds the function implementations 
// defined in PassFailExam.h
// ===========================================================

#include "PassFailExam.h"

// default constructor
PassFailExam::PassFailExam()
{
	this->numQuestions = 0;
	this->numMissed    = 0;
	this->pointsEach   = 0;
}

// overloaded constructor
PassFailExam::PassFailExam(int questions, int missed, double mps)
	: PassFailActivity(mps)
{
	set(questions, missed);
}

// destructor
PassFailExam::~PassFailExam()
{

}

// values passed from main assigned to numQuestions and numMissed
void PassFailExam::set(int questions, int missed)
{
	double numericScore;	 // to hold the numeric score

	// set the number of questions and number missed
	numQuestions = questions;
	numMissed    = missed;

	// calculate the points for each question
	pointsEach = 100.0 / numQuestions;

	// calculate the numeric score for this exam
	numericScore = 100.0 - (missed * pointsEach);

	// call the inherited setScore function to set the numeric score
	setScore(numericScore);

}

// numQuestions returned to main
double PassFailExam::getNumQuestions()
{
	return numQuestions;
}

// pointsEach returned to main
double PassFailExam::getPointsEach()
{
	return pointsEach;
}

// numMissed returned to main
double PassFailExam::getNumMissed()
{
	return numMissed;
}