/***************************
* DIVISION
* --------------------------
* The program prompts the
* user for a numerator and a
* denominator. It then
* calculates the quotient and
* the remainder.
****************************/


#include <iostream>
using namespace std;

int main()
{
    char run;
    do
    {
        int num = 0;
        int denom = 0;
        int quotient = 0;

        cout << "Enter numerator: ";
        cin >> num;
        cin.ignore();

        cout << "Enter denominator: ";
        cin >> denom;
        cin.ignore();

        do
        {
            num -= denom;
            quotient++;
            if (num < 0)
            {
                num += denom;
                quotient--;
                break;
            }
        } while (num != 0);


        cout << "Quotient is: " << quotient << endl;
        cout << "Remainder is: " << num;

        cout << endl << endl;

        cout << "Run again? (Y/N): ";
        cin >> run;
        cin.ignore();

        run = toupper(run);

        cout << endl << endl;

    } while (run != 'N');

    cout << "Thanks for using this program!\n";

    return 0;
}
