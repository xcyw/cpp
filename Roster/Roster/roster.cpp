/*********************************************
LAB #3
---------------------------------------------
2/15/2023
---------------------------------------------
CLASS:   CS1B
PROF:    MED MOGASEMI
STUDENT: ASHLEY SYHONGPAN
---------------------------------------------
This program prompts the user to specify
which student's birthday they want to know.
The program then displays the birthday.
*********************************************/

/*** PREPROCESSOR DIRECTIVES ***/
#include <iostream>
using namespace std;

enum Roster {TOM = 1, SHARON, BILL, TERESA, JOHN};

int main()
{
	// variables
	int student = 0;
	string birthday;
	string name;
	bool valid = true;

	// displays student roster
	cout << "This program will give you a student's birthday.\n\n";
	cout << "1.) = Tom\n"
		 << "2.) = Sharon\n"
		 << "3.) = Bill\n"
		 << "4.) = Teresa\n"
		 << "5.) = John\n";
	
	// prompts the user to enter a student's number in the roster
	cout << "\nWhose birthday do you want to know? ";
	cin  >> student;

	cout << endl;

	// this identifies which student from the roster is called on
	switch (student)
	{
	case TOM:	    birthday = "January 3.";
					name	 = "Tom";
		break;
	case SHARON:	birthday = "April 22.";
					name	 = "Sharon";
		break;
	case BILL:		birthday = "May 19.";
					name	 = "Bill";
		break;
	case TERESA:	birthday = "July 2.";
					name	 = "Teresa";
		break;
	case JOHN:		birthday = "June 17.";
					name	 = "John";
		break;
	default:		cout << "Invalid selection.";
					valid = false;
		break;
	} // END - switch(student)

	// this checks if the user input number is valid
	if (valid)
	{
		// this outputs the specified student's name and birthday 
		cout << name << "'s birthday is " << birthday;
	} // END - if(valid)

	cout << endl;
	
	return 0;

} // END - main()

/*************************** output ***************************
This program will give you a student's birthday.

1.) = Tom
2.) = Sharon
3.) = Bill
4.) = Teresa
5.) = John

Whose birthday do you want to know? 3

Bill's birthday is May 19.

C:\Users\ashle\source\repos\Roster\x64\Debug\Roster.exe (process 26900) exited with code 0.
Press any key to close this window . . .
***************************************************************/