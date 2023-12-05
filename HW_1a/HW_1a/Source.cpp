// Attached: 
// File    :
// ======================================================= 
// Programmer: Ashley Syhongpan
// Class     : CS 1B
// Instructor: Med Mogasemi
// =======================================================
// Program: Monthly Sales Calculator (HW_1a)
// ======================================================= 
// Description:
// User inputs monthly sales amount and
// program determines and outputs the
// commission, base pay, and total pay.
// The program runs until the user inputs
// the exit statement.
// =======================================================
// =======================================================

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
double getSalesAmt();
double calcCommission(double sales);
double calcPay(double commission, const double BASE_PAY);
void   displayPay(char& answer, double sales,
				double commission, double pay, const double BASE_PAY);

// =======================================================
// ==== main =============================================
// =======================================================
int main()
{
	// constant variables
	const double BASE_PAY = 2500;
	// variables
	double sales      = 0;
	double commission = 0;
	double pay        = 0;
	char   answer;

	// loop to repeat program until user inputs 'N' or 'n'
	do
	{
		// function used to return monthly sales amount from user
		sales = getSalesAmt();

		// function used to calculate and return commission from monthly sales
		commission = calcCommission(sales);

		// function used to return total monthly pay for a salesperson from
		// commission and base pay
		pay = calcPay(commission, BASE_PAY);

		// function used to display monthly sales, commission, base pay, total pay,
		// then prompts the user if they want to run the program again
		displayPay(answer, sales, commission, pay, BASE_PAY);

		cout << endl;
	} while(answer == 'Y'); // END - do

	cout << "Thank you! Good bye!";

	return 0;
} // END - int main()
// =======================================================




// =======================================================
// ===== function declaration ============================
// =======================================================

// ==== getSalesAmt ======================================
// This function prompts the user for monthly sales amount and
// returns monthly sales amount to main().
//
// Input:
// Monthly sales amount determined by the user. 
//
// Output:
// Message prompting user to enter monthly sales amount.
// =======================================================
double getSalesAmt()
{
	double sales = 0;

	cout << "Enter monthly sales amount: ";
	cin  >> sales;
	cin.ignore(1000, '\n');

	return sales;
} // END - getSalesAmt()
// =======================================================




// ==== calcCommission ====================================
// This function returns the commission earned by the
// salesperson from the monthly sales amount.
//
// Input:
// Sales from main().
//
// Output:
// Calculated commission.
// =======================================================
double calcCommission(double sales)
{
	double comPerc = 0;

	if (sales > 50000)
	{
		comPerc = 0.02;
	}
	else if (sales > 25000)
	{
		comPerc = 0.015;
	}

	return (sales * comPerc);
} // END - calcCommission()
// =======================================================




// ==== calcPay ==========================================
// This function calculates and returns the total
// pay of the salesperson.
//
// Input:
// Commission and base pay.
// 
// Output:
// Calculated total pay.
// =======================================================
double calcPay(double commission, const double BASE_PAY)
{
	return BASE_PAY + commission;
} // END - calcPay()
// =======================================================




// ==== displayPay =======================================
// This function displays the monthly sales amount
// entered by the user and the commission, base pay,
// and total pay of the salesperson. It also asks the
// user to continue the program or not.
//
// Input:
// User input that determines the programs continuity.
//
// Output:
// Monthly sales amount, commission, base pay, and
// total pay, as well as a message prompting user input
// to either continue or end the program.
// =======================================================
void displayPay(char &answer, double sales, double commission, double pay, const double BASE_PAY)
{
	const int COL = 17;
	bool valid;

	cout << left;
	cout << fixed << setprecision(2);

	cout << setw(COL);
	cout << "Monthly Sales: " << "$ " << sales << endl;
	cout << setw(COL);
	cout << "Commission: "    << "$ " << commission << endl;
	cout << setw(COL);
	cout << "Base Pay: "      << "$ " << BASE_PAY << endl;
	cout << setw(COL);
	cout << "Total Pay: "     << "$ " << pay << endl;

	cout << "Do it again? (Y/N) ";
	cin.get(answer);
	answer = toupper(answer);

	cin.ignore(1000, '\n');
		
} // END - displayPay()
// =======================================================




/* ========================== Output =====================
Enter monthly sales amount: 60000
Monthly Sales:   $ 60000.00
Commission:      $ 1200.00
Base Pay:        $ 2500.00
Total Pay:       $ 3700.00
Do it again? (Y/N) yes

Enter monthly sales amount: 23000
Monthly Sales:   $ 23000.00
Commission:      $ 0.00
Base Pay:        $ 2500.00
Total Pay:       $ 2500.00
Do it again? (Y/N) Y

Enter monthly sales amount: 1200
Monthly Sales:   $ 1200.00
Commission:      $ 0.00
Base Pay:        $ 2500.00
Total Pay:       $ 2500.00
Do it again? (Y/N) n

Thank you! Good bye!
C:\Users\ashle\source\repos\HW_1a\x64\Debug\HW_1a.exe (process 24460) exited with code 0.
Press any key to close this window . . .
*/
