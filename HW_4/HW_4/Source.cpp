// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: struct Date (HW_4)
// =======================================================
// Description:
// The program prompts the user for the month, day, and
// year. If the date entered is valid, then one day is
// added to it, and the new date is output to the screen.
// =======================================================
// =======================================================

/*** PREPROCESSOR DIRECTIVES ***/
#include <iostream>
#include <iomanip>
using namespace std;

/*** STRUCT ***/
struct Date {
	int month;
	int day;
	int year;
};


/*** FUNCTION PROTOTYPES ***/
void getDate(Date& today);
bool isDateValid(Date& today);
void addOneDay(Date& today);
void displayTomorrow(Date& today);

/*** MAIN ***/;
int main()
{
	Date today;
	char loop;
	do
	{
		getDate(today);

		addOneDay(today);
		displayTomorrow(today);

		cout << endl << endl;

		cout << "Do it again? (Y/N) ";
		cin.get(loop);
		cin.ignore(10, '\n');

		cout << endl << endl;

		loop = toupper(loop);


	} while (loop != 'N');

	cout << endl << "Program ended. See you next time!";

	return 0;
} // END - main()


/*** FUNCTION DEFINITION ***/

/*** getDate **********************************************************
This function gets input from user.

Input:


Output:


/**********************************************************************/
void getDate(Date& today) {
	cout << "Enter today's date in the following order:\n";
	cout << "MM/DD/YYYY, (Month, Day, Year).\n";
	do
	{
		cout << "Month: ";
		cin >> today.month;
		cin.ignore();

		cout << "Day: ";
		cin >> today.day;
		cin.ignore();

		cout << "Year: ";
		cin >> today.year;
		cin.ignore();

		if (!isDateValid(today))
		{
			cout << "Invalid entry. Try again.\n\n";
		}

	} while (!isDateValid(today));
} // END - getDate()
/**********************************************************************/


/*** isDateValid *******************************************************
This function gets input from user.

Input:


Output:


/**********************************************************************/
bool isDateValid(Date& today) {
	bool valid = false;

	if (today.month > 0 && today.month < 13) {
		if (today.day > 0 && today.day < 31) {
			if (today.year > 2019)
			{
				valid = true;
			}
		}
	}
	return valid;
} // END - isDateValid()
/**********************************************************************/


/*** addOneDay *********************************************************
This function gets input from user.

Input:


Output:


/**********************************************************************/
void addOneDay(Date& today){
	today.day++;

	if (today.day == 31)
	{
		today.month++;
		today.day = 1;

		if (today.month == 13)
		{
			today.month = 1;
			today.year++;
		}
	}

} // END - addOneDay()
/**********************************************************************/


/*** displayTomorrow ***************************************************
This function gets input from user.

Input:


Output:


/**********************************************************************/
void displayTomorrow(Date& today) {

	cout << "After adding one day to today's date, tomorrow's date is ";

	cout << setw(2);
	cout.fill('0');
	cout << today.month << "/";

	cout << setw(2);
	cout.fill('0');
	cout << today.day << "/";

	cout << today.year;

}
/**********************************************************************/

/******************************* OUTPUT *******************************



***********************************************************************/