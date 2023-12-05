// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Numbers (HW 6a,6b,6c)
// =======================================================
// Description:
// Program reads from a file, writes the data in another
// file, and prompts the user to enter values to add on to
// the results file.
// =======================================================
// =======================================================

#include <iostream>
#include <fstream>

using namespace std;

/*** function prototypes ***/
void readFile(ifstream& inFile);
void writeFile(ifstream& inFile, ofstream& outFile);

int main()
{
	// fstream variables
	ifstream inFile;
	ofstream outFile;
	fstream appFile("results.txt", ios::app);
	
	// constants
	const int ARR_SIZE = 3;

	// variables
	int numbers[ARR_SIZE];

	// this function reads 
	readFile(inFile);

	// this function writes
	writeFile(inFile, outFile);

	// this prompts the user to enter 3 numbers to append to the results.txt file
	cout << "Enter 3 more numbers: \n";
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cin >> numbers[i];
	} // for (int i = 0; i < ARR_SZE; i++)

	/*** this block of code appends user input into results.txt file ***/
	if (appFile.fail())
	{
		cout << "Error opening file!";
		return 0;
	} // END - if (appFile.fail())

	for (int i = 0; i < ARR_SIZE; i++)
	{
		appFile << numbers[i] << endl;
	} // END - for (int i = 0; i < ARR_SIZE; i++)

	// closes file
	appFile.close();
	/******************************************************************/

	cout << "The numbers have been written (appended) to results.txt.";

	return 0;
} // int main()

/*** function definitions ***/

// readFile function
void readFile(ifstream& inFile)
{
	// variables
	int number = 0;

	// opens data.txt to read
	inFile.open("data.txt");

	// checks if data.txt is open
	if (inFile.fail())
	{
		cout << "Error opening file!";
		return;
	} // END - if(inFile.fail())

	cout << "Here are the numbers in the file:\n";

	// loops to read all contents of data.txt
	while (!inFile.eof())
	{
		inFile >> number;
		cout << number << endl;
	} // END - while(!inFile.eof())

	// closes data.txt
	inFile.close();
}

// writeFile function
void writeFile(ifstream& inFile, ofstream& outFile)
{
	// variables
	int number = 0;

	// opens data.txt and results.txt to read and write
	inFile.open("data.txt");
	outFile.open("results.txt");

	// checks if data.txt and results.txt are open
	if (outFile.fail() || inFile.fail())
	{
		cout << "Error opening file!";
		return;
	} // if(outFile.fail() || inFile.fail())

	// loops to read and write all contents of data.txt
	while (!inFile.eof())
	{
		inFile  >> number;
		outFile << number << endl;
	} // END - while(!inFile.eof())

	// closes data.txt and results.txt
	inFile.close();
	outFile.close();

	cout << "The data has been written to the file.";
}

/****************************** OUTPUT ******************************
Here are the numbers in the file:
3
4
5
The data has been written to the file.Enter 3 more numbers:
6
7
8
The numbers have been written (appended) to results.txt.
C:\Users\ashle\source\repos\Numbers\x64\Debug\Numbers.exe (process 3108) exited with code 0.
Press any key to close this window . . .
*********************************************************************/