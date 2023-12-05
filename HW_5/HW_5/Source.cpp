// Attached:
// File : 
// =======================================================
// Programmer: Ashley Syhongpan
// Class : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: ID Search (HW_5)
// =======================================================
// Description:
// This program takes in user input to create a linked
// list of Boxes. Given the option, it will display the
// boxes. The user is then prompted to enter an ID of a
// box to be deleted. The list is displayed again after
// the box has been deleted. 
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
using namespace std;

/*** STRUCT ***/

struct Box {
	int id;
	float width;
	float height;
	float length;
	Box* next;
};

/*** FUNCTION PROTOTYPES ***/
void boxPrompt(Box*& head);
void boxDelete(Box*& head);
void boxDisplay(Box*& head, const int COL);

/*** MAIN ***/
int main()
{
	// constant variables
	const int COL = 11;

	// struct variables
	Box* head = nullptr;

	// variables
	char answer;
	
	// this function prompts the user to input box specifications
	boxPrompt(head);

	cout << endl << endl;
	cout << "Would you like to see the list of boxes (Y/N)? ";
	cin.get(answer);
	cin.ignore();

	// this displays the list of boxes if the user says yes
	if (toupper(answer) == 'Y')
	{
		system("cls");

		boxDisplay(head, COL);
	}

	// this function deletes the box of the id the user inputs
	boxDelete(head);

	system("cls");
	
	boxDisplay(head, COL);

	return 0;
} // END - main()

/*** FUNCTION DEFINITION ***/

/*** boxPrompt ********************************************************
This function prompts the user to enter different types of boxes.

Input:
Box*& head, ID, width, height, and length.

Output:

***********************************************************************/
void boxPrompt(Box*& head) {
	int id;
	
	cout << "Enter the specifications of different types of boxes.\n"
		 << "Include the number of boxes presently in inventory.\n"
		 << "Enter boxes - (-1 to quit):\n\n";

	do
	{
		Box* temp = new Box;

		cout << "ID Number: ";
		cin >> temp->id;
		cin.ignore();

		id = temp->id;

		if (temp->id == -1)
			break;
		 
		cout << "Width: ";
		cin >> temp->width;
		cin.ignore();

		cout << "Height: ";
		cin >> temp->height;
		cin.ignore();

		cout << "Length: ";
		cin >> temp->length;
		cin.ignore();

		cout << endl;

		temp->next = head;
		head = temp;
	} while (id != -1);
}
/**********************************************************************/

/*** boxDelete ********************************************************
This function prompts the user to enter the ID of a box to be deleted.

Input:
Box*& head and ID.

Output:

***********************************************************************/
void boxDelete(Box*& head) {
	Box* temp   = head;
	Box* before = nullptr;

	int  idDelete;

	cout << endl << endl;
	cout << "Enter the ID of the box to be deleted: ";
	cin >> idDelete;
	cin.ignore();

	if (head == nullptr)
	{
		return;
	}
	else if (temp->id == idDelete)
	{
		head = head->next;
		delete temp;
		return;
	}

	while (temp != nullptr && temp->id != idDelete)
	{
		before = temp;
		temp = temp->next;
	}

	if (temp != nullptr)
	{
		before->next = temp->next;
		delete temp;
	}
	
}
/**********************************************************************/

/*** boxDisplay *******************************************************
This function displays the list of boxes.

Input:
Box*& head and the column value to display the list.

Output:
The list of boxes.
***********************************************************************/
void boxDisplay(Box*& head, const int COL) {
	Box* temp = head;

	cout << "Types of boxes:\n\n";

	cout << setw(COL) << left      << "ID#" << setw(COL) << left
		 << "Width"   << setw(COL) << left  << "Height"  << setw(COL)
		 << left      << "Length";

	cout << endl;

	cout << setfill('-') << setw((COL * 3) + 6);
	cout << '-';
	cout << setfill(' ');

	while (temp != NULL)
	{
		cout << endl;
		cout << setw(COL) << left << temp->id;
		cout << setw(COL) << left << temp->width;
		cout << setw(COL) << left << temp->height;
	    cout << setw(COL) << left << temp->length;

		temp = temp->next;
	}
}
/**********************************************************************/

/******************************* OUTPUT *******************************
Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit):

ID Number: 1
Width: 1
Height: 1
Length: 1

ID Number: 2
Width: 2
Height: 2
Length: 2

ID Number: 3
Width: 3
Height: 3
Length: 3

ID Number: -1


Would you like to see the list of boxes (Y/N)? y

---------------- (Screen Clears) ----------------
Types of boxes:

ID#        Width      Height     Length
---------------------------------------
3          3          3          3
2          2          2          2
1          1          1          1

Enter the ID of the box to be deleted: 2

---------------- (Screen Clears) ----------------
Types of boxes:

ID#        Width      Height     Length
---------------------------------------
3          3          3          3
1          1          1          1
C:\Users\ashle\source\repos\HW_5\x64\Debug\HW_5.exe (process 36132) exited with code 0.
Press any key to close this window . . .

***********************************************************************/