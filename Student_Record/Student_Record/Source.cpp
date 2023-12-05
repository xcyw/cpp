// Attached: 
// File    :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class     : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Student Record(HW_1c)
// ======================================================= 
// Description:
// User inputs student name, id, and gpa.
// The program outputs this information.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

#include "prototypes.h"

// =======================================================
// ==== main =============================================
// =======================================================
int main()
{
	int id    = 0;
	float gpa = 0;
	string name;

	// function used to prompt the user for id, name, gpa
	getRecord(id, name, gpa);

	// to clear screen
	system("CLS");

	// function used to output id, name, gpa
	displayRecord(id, name, gpa);

} // END - int main()
// =======================================================




// =======================================================
// ===== function declaration ============================
// =======================================================

// ==== getRecord ========================================
// This function prompts the user for student id, student
// name, and student gpa.
//
// Input:
// Student id, name, and gpa.
//
// Output:
// 
// =======================================================
void getRecord(int& id, string& name, float& gpa) 
{
	cout << left;

	cout << "Enter a student record:\n";
	
	cout << setw(6) << "ID: ";
	cin  >> id;
	cin.ignore(1000, '\n');

	cout << setw(6) << "NAME: ";
	getline(cin, name);

	cout << setw(6) <<	"GPA: ";
	cin  >> gpa;
	cin.ignore(1000, '\n');

	cout << right;
} // END - getRecord()
// =======================================================




// ==== displayRecord ====================================
// This function displays the student id, name, and gpa.
//
// Input:
// Student id, name, and gpa.
//
// Output:
// Student id, name, and gpa.
// =======================================================
void displayRecord(int id, string name, float gpa)
{
	cout << "STUDENT RECORD\n";

	cout << left;
	cout << "ID: ";
	cout << setw(14) << right << id << endl;

	cout << left;
	cout << "NAME: ";

	cout << setw(12) << right << name << endl;

	cout << left;
	cout << "GPA: ";

	cout << setw(13) << right << gpa;
} // END - displayRecord()
// =======================================================

/* ========================== Output =====================
Enter a student record:
ID:   12345
NAME: Tom Lee
GPA:  3.5
--- screen clears ---
STUDENT RECORD
ID:          12345
NAME:      Tom Lee
GPA:           3.5
C:\Users\ashle\source\repos\Student_Record\x64\Debug\Student_Record.exe (process 23108) exited with code 0.
Press any key to close this window . . .
*/