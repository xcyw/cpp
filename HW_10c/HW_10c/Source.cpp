#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	/* VARIABLES */ 
	vector<int> hours;
	vector<double> wage;
	int inputHours;
	double inputWage;

	// changes hours and wage size to 5
	hours.resize(5);
	wage.resize(5);

	
	cout << "Enter hours worked and hourly wage of each employee:\n";

	// gets 5 employee hours and wages 
	for (int i = 0; i < 5; i++)
	{
		// prompts for employee hours
		cout << "Hours for Employee #" << i + 1 << ": ";
		cin  >> inputHours;
		cin.ignore();
		hours.at(i) = inputHours;

		// prompts for employee wage
		cout << "Wage for Employee #" << i + 1 << ": ";
		cin  >> inputWage;
		cin.ignore();
		wage.at(i) = inputWage;
	}

	// clear screen
	system("cls");
	cout << fixed << setprecision(2);


	cout << "Gross pay for each employee:\n\n";

	// outputs employee gross pay
	for (int i = 0; i < hours.size(); i++)
	{
		cout << setw(11) << "Employee #" << i + 1 << setw(5) << "$" 
			 << setw(7)  << hours.at(i) * wage.at(i) << endl;
	}

	cout << endl;

	// outputs hours of employee #1 and employee #5
	cout << "Employee #1 hours = " << hours.front();
	cout << endl;
	cout << "Employee #5 hours = " << hours.back();
	cout << endl;

	return 0;
}

/* OUTPUT *
Gross pay for each employee:

 Employee #1    $ 280.00
 Employee #2    $  72.00
 Employee #3    $ 814.00
 Employee #4    $  26.00
 Employee #5    $ 160.00

Employee #1 hours = 28
Employee #5 hours = 8

C:\Users\ashle\source\repos\HW_10c\x64\Debug\HW_10c.exe (process 18560) exited with code 0.
Press any key to close this window . . .
*/