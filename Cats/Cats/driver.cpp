/// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: ID Search (HW_2a)
// =======================================================
// Description:
// User inputs an ID number. The program checks the array
// and determines whether the input ID number is in the
// array. If so, the index number will be displayed. If
// not, the program will say so.
// =======================================================
// =======================================================

#include <iostream>
#include <fstream>
using namespace std;

/*** struct ***/
struct Cat
{
	char name[20];
	int age;
};


int main()
{
	// fstream variables
	fstream outFile("critters.bin", ios::binary | ios::app);

	// struct
	Cat cats[3];
	Cat catAddOn;


	// variables

	/*** this section prompts the user for information of 3 cats ***/
	cout << "Enter 3 cat records.\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter information about a cat:\n";

		cout << "NAME: ";
		cin.getline(cats[i].name, 20);

		cout << "AGE: ";
		cin >> cats[i].age;
		cin.ignore();
	}

	/****************************************************************/

	// this checks if the file is opened
	if (outFile.fail())
	{
		cout << "Error opening file!";
		return 0;
	}

	// this loops until all three cats are written in the file
	for (int i = 0; i < 3; i++)
	{
		outFile.write((char*)&cats[i], sizeof(Cat));
	}

	// this prompts the user for one more cat 
	cout << endl;
	cout << "Enter one more cat:\n";

	cout << "NAME: ";
	cin.getline(catAddOn.name, 20);

	cout << "AGE: ";
	cin >> catAddOn.age;
	cin.ignore();

	// this appends the fourth cat into the file
	outFile.write((char*)&catAddOn, sizeof(Cat));

	outFile.close();

	return 0;
}


/******************************* OUTPUT *******************************
Enter 3 cat records.
Enter information about a cat:
NAME: the great one
AGE: 8
Enter information about a cat:
NAME: yuumi
AGE: 2
Enter information about a cat:
NAME: fluffy lil guy
AGE: 9

Enter one more cat:
NAME: Opal
AGE: 2

C:\Users\ashle\source\repos\Cats\x64\Debug\Cats.exe (process 28204) exited with code 0.
Press any key to close this window . . .
***********************************************************************/
