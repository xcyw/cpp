// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Student Grades (HW_2d)
// =======================================================
// Description:
// Program reads data the grades of 5 students in 3
// classes from a text file and outputs it all the grades,
// each student gpa, and the average gpa by subject.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/*** MAIN ***/
int main()
{
	const int ROW  = 5;
	const int COL  = 3;
	const int SIZE = 11;

	float gpa    = 0;
	float letter = 0;

	char grades[ROW][COL];

	ifstream file("grades.txt");

	if (file.is_open())
	{
		for (int r = 0; r < ROW; r++)
		{
			for (int c = 0; c < COL; c++)
			{
				file >> grades[r][c];
			} // END - for (int c = 0; c < COL; c++)

		} // END - for (int r = 0; r < ROW; r++)

	} // END - if (file.is_open())


	// OUTPUT ALL GRADES
	cout << "All Grades\n";
	cout << left;
	cout << setw(SIZE) << "Student" << setw(SIZE) << "English" << setw(SIZE) << "History" << setw(SIZE) << "Math";
	cout << endl;
	for (int r = 0; r < ROW; r++)
	{
		cout << "#" << setw(SIZE-1) << r + 1;
		for (int c = 0; c < COL; c++)
		{
			cout << setw(SIZE) << grades[r][c];

		} // END - for (int c = 0; c < COL; c++)
		cout << endl;

	} // END - for (int r = 0; r < ROW; r++)

	// OUTPUT STUDENT GPAS
	cout << endl << endl;
	cout << "STUDENT GPAs\n";
	cout << "Student\n";

	cout << setprecision(2) << fixed;

	for (int r = 0; r < ROW; r++)
	{
		cout << "#" << setw(SIZE - 1) << r + 1;
		for (int c = 0; c < COL; c++)
		{
			switch (grades[r][c])
			{
			case 'A': letter = 4;
					  break;
			case 'B': letter = 3;
					  break;
			case 'C': letter = 2;
					  break;
			case 'D': letter = 1;
					  break;
			default:  letter = 0;
					  break;
			} // END - switch (grades[r][c])
			gpa += letter;

		} // END - for (int c = 0; c < COL; c++)
		cout << gpa / 3;
		gpa = 0;
		cout << endl;

	} // END - for (int r = 0; r < ROW; r++)

	// OUTPUT AVERAGE GPA BY SUBJECT
	cout << endl << endl;
	cout << "Average GPA by Subject\n";
	cout << left;
	cout << setw(SIZE) << "English" << setw(SIZE) << "History" << setw(SIZE) << "Math";

	cout << endl;

	for (int c = 0; c < COL; c++)
	{
		for (int r = 0; r < ROW; r++)
		{
			switch (grades[r][c])
			{
			case 'A': letter = 4;
				break;
			case 'B': letter = 3;
				break;
			case 'C': letter = 2;
				break;
			case 'D': letter = 1;
				break;
			default:  letter = 0;
				break;
			} // END - switch (grades[r][c])
			gpa += letter;

		} // END - for (int r = 0; r < ROW; r++)
		cout << setw(SIZE) << gpa / 5;
		gpa = 0;

	} // END - for (int c = 0; c < COL; c++)

	return 0;
} // END - main()

/******************************* OUTPUT *******************************
All Grades
Student    English    History    Math
#1         A          A          B
#2         C          C          F
#3         C          D          B
#4         B          A          C
#5         B          A          B


STUDENT GPAs
Student
#1         3.67
#2         1.33
#3         2.00
#4         3.00
#5         3.33


Average GPA by Subject
English    History    Math
2.80       3.00       2.20
C:\Users\ashle\source\repos\HW_2d\x64\Debug\HW_2d.exe (process 2744) exited with code 0.
Press any key to close this window . . .
***********************************************************************/