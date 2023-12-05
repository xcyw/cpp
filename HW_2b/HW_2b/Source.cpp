// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: ID Search (HW_2b)
// =======================================================
// Description:
// User inputs an ID number. The program checks the array
// and determines whether the input ID number is in the
// array. If so, the index number will be displayed. If
// not, the program will say so.
// =======================================================
// =======================================================

#include <iostream>
using namespace std;

/*** MAIN ***/
int main()
{
	const int arrSize = 5;

	int idNumbers[arrSize] = { 12345, 54321, 11223, 33211, 44411 };
	int id = 0;
	int exist = 0;

	// this prompts the user to enter an id number
	cout << "Enter an ID number: ";
	cin  >> id;

	// this loops until array is fully searched
	for (int i = 0; i < arrSize; i++)
	{
		// this compares the value in index i with the id number entered
		if (idNumbers[i] == id)
		{
			cout << "ID number found! Its index number is " << i << ".\n";
			exist++;
		} // END - if(idNumbers[i] == id)

	} // END - for (int i = 0; i < arrSize; i++)

	// this checks if the id number entered by user exists in the array
	if (exist == 0)
	{
		cout << "ID number is not in list.";
	} // END - if (exist == 0)

	return 0;
} // END - main()

/**********************************************************************/

/******************************* OUTPUT *******************************
Enter an ID number: 44411
ID number found! Its index number is 4.

C:\Users\ashle\source\repos\HW_2b\x64\Debug\HW_2b.exe (process 24984) exited with code 0.
Press any key to close this window . . .
***********************************************************************/