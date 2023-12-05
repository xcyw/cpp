// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: ID Search (HW_2c)
// =======================================================
// Description:
// User inputs an ID number. The program checks the array
// and determines whether the input ID number is in the
// array. If so, the index number will be displayed. If
// not, the program will say so.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

/*** GOLBAL VARIABLES ***/
const int ROW = 3;
const int COLUMN = 4;

/*** FUNCTION PROTOTYPES ***/
void getData(int* ptr);
void displayData(int numArray[][COLUMN]);

/*** MAIN ***/
int main()
{
	int numArray[ROW][COLUMN];

	// this function prompts the user to enter values into a 2D array
	getData(&numArray[0][0]);

	// this function displays the 2D array to the user in a grid 
	displayData(numArray);

	return 0;
} // END - main()

/*** FUNCTION DEFINITION ***/

/*** getData **********************************************************
This function prompts the user to enter values and reads in the data
into numArray.

Input:
Integer values.

Output:

***********************************************************************/
void getData(int* ptr)
{
	cout << "Enter integers into the 2-Dimensional array:\n";
	
	// this loops until user has entered enough values to place in 2D array
	for (int r = 0; r < ROW; r++)
	{
		for (int c = 0; c < COLUMN; c++)
		{
			cout << "Enter a number:  ";
			cin  >> *ptr;
			ptr++;
		} // END - for (int c = 0; c < COLUMN; c++)
	} // END - for (int r = 0; r < ROW; r++)

} // END - getData()

/**********************************************************************/

/*** displayData *******************************************************
This function displays the numArray in a grid formation.

Input:
numArray.

Output:
numArray.
***********************************************************************/
void displayData(int numArray[][4])
{
	system("CLS");

	cout << "Here is the data in the 2-Dimensional array:\n";

	// this loops until all values in the 2d array is output
	for (int r = 0; r < ROW; r++)
	{
		for (int c = 0; c < COLUMN; c++)
		{
			cout << right << setw(6);
			cout << numArray[r][c];
		} // END - for (int c = 0; c < COLUMN; c++)
		cout << endl;

	} // END - for (int r = 0; r < ROW; r++)

} // END - displayArray()

/**********************************************************************/

/******************************* OUTPUT *******************************
Enter integers into the 2-Dimensional array:
Enter a number:  1
Enter a number:  2
Enter a number:  3
Enter a number:  4
Enter a number:  5
Enter a number:  6
Enter a number:  7
Enter a number:  8
Enter a number:  9
Enter a number:  10
Enter a number:  11
Enter a number:  12
-- SCREEN CLEARS --
Here is the data in the 2-Dimensional array:
	 1     2     3     4
	 5     6     7     8
	 9    10    11    12

C:\Users\ashle\source\repos\HW_2c\x64\Debug\HW_2c.exe (process 3812) exited with code 0.
Press any key to close this window . . .
***********************************************************************/