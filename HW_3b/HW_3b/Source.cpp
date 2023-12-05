// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: showEvens (HW_3b)
// =======================================================
// Description:
// The program uses a reucrsive function to output
// all even numbers from 1 to 20 (including 20).
// =======================================================
// =======================================================

#include <iostream>
using namespace std;

/*** FUNCTION PROTOTYPES ***/
void showEvens(int num);

/*** MAIN ***/
int main()
{
	int num = 20;

	cout << "Here are all even numbers from 1 to " << num << ":\n";

	// this function outputs alll even numbers from 1 - 20
	showEvens(20);

	return 0;
} // END - main()

/*** FUNCTION DEFINITION ***/

/*** showEvens ********************************************************
This function outputs all the even numbers from 1 to the integer
argument passed in.

Input:
Integer.

Output:
All even numbers from 1 to the integer.

***********************************************************************/
void showEvens(int num)
{
	if (num > 0)
	{
		showEvens(num - 2);

		cout << num << " ";
	} // END - if(num > 0)
} // END - showEvens()

/**********************************************************************/

/******************************* OUTPUT *******************************
Here are all even numbers from 1 to 20:
2 4 6 8 10 12 14 16 18 20
C:\Users\ashle\source\repos\HW_3b\x64\Debug\HW_3b.exe (process 15972) exited with code 0.
Press any key to close this window . . .
***********************************************************************/