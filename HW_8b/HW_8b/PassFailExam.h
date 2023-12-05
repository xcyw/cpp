// ===========================================================
// File: PassFailExam.h - Contains the class PassFailExam
// ===========================================================

#ifndef PASSFAILEXAM_H_
#define PASSFAILEXAM_H_

#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity
{
private:
	int numQuestions;									 // number of questions
	int numMissed;										 // number of questions missed
	double pointsEach;									 // points of each question
public:
	PassFailExam();										 // default constructor
	PassFailExam(int questions, int missed, double mps); // overloaded constructor
	~PassFailExam();									 // destructor
	void set(int questions, int missed);				 // values passed from main assigned to numQuestions and numMissed
	double getNumQuestions();							 // numQuestions returned to main
	double getPointsEach();								 // pointsEach returned to main
	double getNumMissed();								 // numMissed returned to main
};

#endif