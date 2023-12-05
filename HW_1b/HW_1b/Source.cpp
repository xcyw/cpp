// Attached: 
// File    :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class     : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Temperature Average (HW_1b)
// ======================================================= 
// Description:
// User inputs three temperatures of three
// cities and the program calculates and
// displays its average.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void getTemps(float& temp1, float& temp2, float& temp3);

float calcAvg(float temp1, float temp2, float temp3);

void displayAvg(float avg);

// =======================================================
// ==== main =============================================
// =======================================================
int main()
{
	float temp1 = 0;
	float temp2 = 0;
	float temp3 = 0;
	float avg = 0;

	// function used to prompt the user for three temps.
	getTemps(temp1, temp2, temp3);

	// function used to return average of the three temps.
	avg = calcAvg(temp1, temp2, temp3);

	// function used to display the average
	displayAvg(avg);

} // END - int main()
// =======================================================




// =======================================================
// ===== function declaration ============================
// =======================================================

// ==== getTemps =========================================
// This function prompts the user for the temperature
// of 3 cities which is then passed by reference back
// to int main().
//
// Input:
// Temperature of three cities.
//
// Output:
// 
// =======================================================
void getTemps(float& temp1, float& temp2, float& temp3)
{
	cout << "Enter temperatures of 3 cities.\n";

	cout << "#1:   ";
	cin  >> temp1;

	cout << "#2:   ";
	cin >> temp2;

	cout << "#3:   ";
	cin >> temp3;
} // END - getTemps()
// =======================================================




// ==== calcAvg ==========================================
// This function dalculates the average of three
// temperatures.
//
// Input:
// Temperature of three cities.
//
// Output:
// Average temperature between the three cities.
// =======================================================
float calcAvg(float temp1, float temp2, float temp3)
{
	return (temp1 + temp2 + temp3) / 3;
} // END - calcAvg()
// =======================================================




// ==== displayAvg =========================================
// This function displays the average temperature between
// the three citites.
//
// Input:
// Average temperature.
//
// Output:
// Average temperature.
// =======================================================
void displayAvg(float avg)
{
	cout << fixed;
	cout << setprecision(1);
	cout << "The average temperature is " << avg << " degrees."; 
	cout << setprecision(2);
	cout << scientific;
} // END - displayAvg()
// =======================================================

/* ========================== Output =====================
Enter temperatures of 3 cities.
#1:   77.5
#2:   82.5
#3:   71.0
The average temperature is 77.0 degrees.
C : \Users\ashle\source\repos\HW_1b\x64\Debug\HW_1b.exe(process 22488) exited with code 0.
Press any key to close this window . . .
*/