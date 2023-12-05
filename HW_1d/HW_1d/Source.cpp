// Attached: 
// File    :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class     : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Display Volume(HW_1d)
// ======================================================= 
// Description:
// User inputs dimensions of a pool and the program
// outputs the volume.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void getDimensions(float& width, float& length, float& depth);

bool areValid(float width, float length, float depth);

float calcVolume(float width, float length, float depth);

void displayVolume(float volume);

// =======================================================
// ==== main =============================================
// =======================================================
int main()
{
	float width  = 0;
	float length = 0;
	float depth  = 0;
	float volume = 0;
	bool  valid;

	// function used to prompt the user pool dimensions
	getDimensions(width, length, depth);

	// function used to check if the dimensions are valid
	valid = areValid(width, length, depth);

	// function used to calculate volume
	volume = calcVolume(width, length, depth);

	// function used to display the volume
	displayVolume(volume);

} // END - int main()
// =======================================================




// =======================================================
// ===== function declaration ============================
// =======================================================

// ==== getDimensions ====================================
// This function prompts the user for three dimensions
// of the swimming pool.
//
// Input:
// Width, length, and pool.
//
// Output:
// Width, length, and pool.
// =======================================================
void getDimensions(float& width, float& length, float& depth)
{
	cout << left;
	cout << setw(7);

	cout << "Width: ";
	cin  >> width;

	cout << "Length: ";
	cin  >> length;

	cout << "Depth: ";
	cin  >> depth;

	cout << right;
} // END - getDimensions()
// =======================================================




// ==== areValid =========================================
// This function checks if the dimensions are valid.
//
// Input:
// Width, length, and depth.
//
// Output:
// Validity status of the dimensions given.
// =======================================================
bool areValid(float width, float length, float depth)
{
	return (((width > 5) && (width < 20))   &&
	       ((length > 5) && (length < 100)) &&
		   ((depth > 1)  && (depth < 12)));
} // END - areValid()
// =======================================================




// ==== calcVolume =======================================
// This function calculates the volume of the pool.
//
// Input:
// Width, length, and depth.
//
// Output:
// Volume.
// =======================================================
float calcVolume(float width, float length, float depth)
{
	return width * length * depth;
} // END - calcVolume()
// =======================================================




// ==== displayVolume ====================================
// This function displays the volume of the pool.
//
// Input:
// Volume.
//
// Output:
// Volume.
// =======================================================
void displayVolume(float volume)
{
	cout << "The volume is " << volume << " cubic feet.";
} // END - displayVolume()
// =======================================================
/* ========================== Output =====================
Width: 12
Length: 22
Depth: 8
The volume is 2112 cubic feet.
C:\Users\ashle\source\repos\HW_1d\x64\Debug\HW_1d.exe (process 7032) exited with code 0.
Press any key to close this window . . .
*/