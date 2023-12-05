// Attached:
// File :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: c_strings (HW_2a)
// ======================================================= 
// Description:
// User inputs their name and last age. The program
// displys their full name and age.
// =======================================================
// =======================================================
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

/*** function prototype ***/
void displayInfo(char name[], int age);

int main()
{
	// variables
	char firstName[10] = "Tom";
	char lastName[10] = "";
	char fullName[20] = "";
	int age = 0;

	// prompts user for age
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore();

	// pronpts user for last name
	cout << "Enter the last name: ";
	cin.getline(lastName, 10);

	// concatenates firstName and lastName to fullName
	strcat_s(fullName, 20 * sizeof(char), firstName);
	strcat_s(fullName, 20 * sizeof(char), " ");
	strcat_s(fullName, 20 * sizeof(char), lastName);

	// function used to display user full name and age
	displayInfo(fullName, age);

	return 0;
} // END - int main()


/*** function definition ***/

/**** displayInfo ***************************************************
* This function displays the user's full name and age.
* 
* Input:
* User's full name and age.
* 
* Output:
* A greeting and user's full name and age.
**********************************************************************/

void displayInfo(char name[], int age)
{
	cout << "Hello " << name << ". You are " << age << " years old.";
} // END - displayInfo()

/****************************** OUTPUT ******************************
Enter your age: 21
Enter the last name: Lee
Hello Tom Lee. You are 21 years old.
C:\Users\ashle\source\repos\HW_2a\x64\Debug\HW_2a.exe (process 16860) exited with code 0.
Press any key to close this window . . .
**********************************************************************/