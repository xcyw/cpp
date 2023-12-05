// Attached: 
// File    :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class     : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program:  (HW_1d)
// ======================================================= 
// Description:
// 
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// function prototypes
void getLogin(string& id, string& pw);
bool validateLogin(string id, string pw);
void showResult(bool valid);

// =======================================================
// ==== main =============================================
// =======================================================
int main()
{
	string id;
	string pw;
	bool valid;

	// function used to get id and password from user
	getLogin(id, pw);

	// function used to validate login information
	valid = validateLogin(id, pw);

	// function used to output if login is valid
	showResult(valid);

} // END - int main()
// =======================================================




// =======================================================
// ===== function declaration ============================
// =======================================================

// ==== getLogin =========================================
// This function prompts the user for login information.
//
// Input:
// ID and password.
//
// Output:
// ID and password.
// =======================================================
void getLogin(string& id, string& pw)
{
	cout << left;

	cout << setw(17);
	cout << "Enter your ID: ";
	getline(cin, id);

	cout << setw(17);
	cout << "Enter your PW: ";
	getline(cin, pw);

	cout << right;
} // END - getLogin()
// =======================================================




// ==== validateLogin ====================================
// This function prompts the user for login information.
//
// Input:
// ID and password.
//
// Output:
// ID and password.
// =======================================================
bool validateLogin(string id, string pw)
{
	fstream inFile;
	inFile.open("login.txt", ios::in);
	if (inFile.is_open())
	{
		string login;
		getline(inFile, login);

		if (login.compare(id) == 0)
		{
			getline(inFile, login);
			if (login.compare(pw) == 0)
			{
				return true;
			}
		}
		inFile.close();
	}

	return false;
} // END - getLogin()
// =======================================================




// ==== showResult =======================================
// This function prompts the user for login information.
//
// Input:
// ID and password.
//
// Output:
// ID and password.
// =======================================================
void showResult(bool valid)
{
	if (valid)
		cout << "Valid";

	else
		cout << "Invalid";

} // END - getLogin()
// =======================================================

/* ========================== Output =====================
	incomplete
*/