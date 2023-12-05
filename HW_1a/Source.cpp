#include <iostream>
#include <iomanip>
using namespace std;

/*** FUNCTION DEFINITION ***/
double getSalesAmt();

double calcCommission(double sales);

double calcPay(double commission, const double BASE_PAY);

void displayPay(char& answer, double sales,
	double commission, double pay, const double BASE_PAY);


int main()
{
	const double BASE_PAY = 2500;

	double sales = 0;
	double commission = 0;
	double pay = 0;
	char   answer;

	do
	{
		sales = getSalesAmt();
		commission = calcCommission(sales);
		pay = calcPay(commission, BASE_PAY);

		displayPay(answer, sales, commission, pay, BASE_PAY);

		cout << endl;
		cout << right;

	} while ((answer == 'Y'));

	cout << "Good bye!";

	return 0;
}


/*** FUNCTION DECLARATION ***/
double getSalesAmt()
{
	double sales = 0;
	do
	{
		cout << "Enter monthly sales amount: ";
		cin  >> sales;
	} while ((sales < 0) || (sales > 1000000000000));

	return sales;
}

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
}

double calcPay(double commission, const double BASE_PAY)
{
	return BASE_PAY + commission;
}

void displayPay(char& answer, double sales,
	double commission, double pay, const double BASE_PAY)
{
	const int COL = 17;

	cout << left;
	cout << fixed << setprecision(2);

	cout << setw(COL);
	cout << "Monthly Sales: " << "$ " << sales << endl;
	cout << setw(COL);
	cout << "Commission: " << "$ " << commission << endl;
	cout << setw(COL);
	cout << "Base Pay: " << "$ " << BASE_PAY << endl;
	cout << setw(COL);
	cout << "Total Pay: " << "$ " << pay << endl;

	do
	{
		cin.ignore(1000, '\n');
		cout << "Do it again? (Y/N) ";
		cin.get(answer);
		answer = toupper(answer);
	} while ((answer != 'Y') && (answer != 'N'));
}

