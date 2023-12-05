// Attached:
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


int main1()
{
	// fstream variables
	fstream outFile("critters.bin", ios::out | ios::binary);

	// struct
	Cat cats[3];

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


	if (outFile.fail())
	{
		cout << "Error opening file!";
		return 0;
	}

	for (int i = 0; i < 3; i++)
	{
		outFile.write((char*) &cats[i], sizeof(Cat));
	}

	outFile.close();

	return 0;
}


/******************************* OUTPUT *******************************
Enter 3 cat records.
Enter information about a cat:
NAME: lil buddy
AGE: 12
Enter information about a cat:
NAME: the pope
AGE: 3
Enter information about a cat:
NAME: belphegor
AGE: 7

C:\Users\ashle\source\repos\Cats\x64\Debug\Cats.exe (process 29592) exited with code 0.
Press any key to close this window . . .
***********************************************************************/