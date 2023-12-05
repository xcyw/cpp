// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: showOdds (HW_3c)
// =======================================================
// Description:
//  The program uses a reucrsive function to output
//  all odd numbers from 20 to 1.
// =======================================================
// =======================================================

#include <iostream>
using namespace std;

/*** FUNCTION PROTOTYPES ***/
void showOdds(int num);

/*** MAIN ***/
int main()
{
	int num = 20;

	cout << "Here are all odd numbers from " << num << " to 0:\n";

	// this function outputs all odd numbers from 20 to 0
	showOdds(num);

	return 0;
} // END - main()

/*** FUNCTION DEFINITION ***/

/*** showOdds *********************************************************
This function outputs all odd numbers from integer argument passed
to 0.

Input:
Integer.

Output:
All odd numbers from integer to 0.
***********************************************************************/
void showOdds(int num)
{
	if (num > 0)
	{
		num--;
		cout << num << " ";
		showOdds(num - 1);
	} // END - if(num > 0)
} // END - showOdds()

/**********************************************************************/

/******************************* OUTPUT *******************************
Here are all odd numbers from 20 to 0:
19 17 15 13 11 9 7 5 3 1
C:\Users\ashle\source\repos\HW_3c\x64\Debug\HW_3c.exe (process 36204) exited with code 0.
Press any key to close this window . . .
***********************************************************************/