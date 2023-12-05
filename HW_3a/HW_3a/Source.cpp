// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Decimal to Binary (HW_3a)
// =======================================================
// Description:
// Program converts decimal number (int) into a
// binary number.
// =======================================================
// =======================================================

#include <iostream>
using namespace std;

/*** FUNCTION PROTOTYPES ***/
void decToBinary(int dec);

/*** MAIN ***/
int main()
{
	int dec = 0;

	cout << "Enter a non-negative integer value: ";
	cin >> dec;

	// this checks if the input is less than 0
	if (dec < 0)
	{
		cout << "Invalid entry.";
		return 0;
	}

	cout << "Decimal " << dec << " = ";

	// this function outputs the decimal converted into binary
	decToBinary(dec);
	
	cout << " binary.";


	return 0;
} // END - main()

/*** FUNCTION DEFINITION ***/

/*** decToBinary ******************************************************
This function converts a decimal into a binary number by dividing
the integer by 2 and displaying its output until the decimal number
is no longer divisible.

Input:
Decimal.

Output:
Binary number.

***********************************************************************/
void decToBinary(int dec)
{
	if (dec != 0)
	{
		decToBinary(dec / 2);
		cout << dec % 2;
	}
}

/**********************************************************************/

/******************************* OUTPUT *******************************
Enter a non-negative integer value: 12
Decimal 12 = 1100 binary.
C:\Users\ashle\source\repos\HW_3a\x64\Debug\HW_3a.exe (process 15984) exited with code 0.
Press any key to close this window . . .


***********************************************************************/