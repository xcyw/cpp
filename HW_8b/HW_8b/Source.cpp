// ===========================================================
// File: Source.cpp
// ===========================================================
// Description: This program demonstrates a hierarchy of classes as follows:
// class GradedActivity - base class
// class PassFailActivity - derives from base class
// class PassFailExam - derives from PassFailActivity
// ===========================================================
// This program demonstrates a base class with a protected member
// ===========================================================

#include <iostream>
#include <iomanip>
#include "PassFailExam.h"
using namespace std;

int main()
{
	int questions;     // Number of questions
	int missed;        // Number of questions missed
	double minPassing; // The minimum passing score


	// Define a GradedActivity object.
	GradedActivity exam_1(88.0);

	// This demonstrates that the getLetterGrade() method is called by
	// the GradedActivity object.

	cout << "The student's grade on Exam #1 is "
		<< exam_1.getLetterGrade() << endl << endl
		<< "---------------------------\n\n";

	// Get the number of questions on the exam.
	cout << "How many questions are on the exam? ";
	cin >> questions;

	// Get the number of questions the student missed.
	cout << "How many questions did the student miss? ";
	cin >> missed;

	// Get the minimum passing score.
	cout << "Enter the minimum passing score for this test: ";
	cin >> minPassing;

	// Instantiate a PassFailExam object.
	PassFailExam exam_2(questions, missed, minPassing);

	// Display the test results.
	cout << fixed << setprecision(1);
	cout << "\nEach question counts "
		 << exam_2.getPointsEach() << " points.\n";
	cout << "The minimum passing score is "
		 << exam_2.getMinPassingScore() << endl;
	cout << "The student's exam score is "
		 << exam_2.getScore() << endl;

	// This demonstrates that the getLetterGrade() method is redefined and is
	// called by the PassFailExam object.
	cout << "The student's grade on Exam #2 is "
		 << exam_2.getLetterGrade() << endl;

	return 0;
}
// =======================================================


/* ==== OUTPUT ===============================================
The student's grade on Exam #1 is B

---------------------------

How many questions are on the exam? 30
How many questions did the student miss? 3
Enter the minimum passing score for this test: 21

Each question counts 3.3 points.
The minimum passing score is 21.0
The student's exam score is 90.0
The student's grade on Exam #2 is P

C:\Users\ashle\source\repos\HW_8b\x64\Debug\HW_8b.exe (process 10652) exited with code 0.
Press any key to close this window . . .
==============================================================*/
