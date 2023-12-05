#include "Presidents.h"

int main()
{
	// variables
	Presidents presidentOne, presidentTwo, presidentThree;
	
	int number;
	string name;
	string quote;
	

	/* PROMPTS FOR 3 PRESIDENT'S INFO */

	// prompts for first president's info
	cout << "Enter first president's number: ";
	cin >> number;
	cin.ignore();
	presidentOne.setNumber(number);

	cout << "Enter his name: ";
	getline(cin, name);
	presidentOne.setName(name);

	cout << "Enter his quote: ";
	getline(cin, quote);
	presidentOne.setQuote(quote);
	cout << endl << endl;
	// END - first president's info

	// prompts for second president's info
	cout << "Enter second president's number: ";
	cin >> number;
	cin.ignore();
	presidentTwo.setNumber(number);

	cout << "Enter his name: ";
	getline(cin, name);
	presidentTwo.setName(name);

	cout << "Enter his quote: ";
	getline(cin, quote);
	presidentTwo.setQuote(quote);
	cout << endl << endl;
	// END - second president's info

	// prompts for third president's info
	cout << "Enter third president's number: ";
	cin >> number;
	cin.ignore();
	presidentThree.setNumber(number);

	cout << "Enter his name: ";
	getline(cin, name);
	presidentThree.setName(name);

	cout << "Enter his quote: ";
	getline(cin, quote);
	presidentThree.setQuote(quote);
	cout << endl << endl;
	// END - third president's info

	cout << "The presidents are:\n";

	presidentOne.displayPresidents();
	cout << endl;
	presidentTwo.displayPresidents();
	cout << endl;
	presidentThree.displayPresidents();
	cout << endl;

	return 0;
}

/* OUTPUT 
Enter first president's number: 37
Enter his name: Richard Nixon
Enter his quote: I am not a crook.


Enter second president's number: 45
Enter his name: Donald Trump
Enter his quote: Is our country still spending money on the GLOBAL WARMING HOAX?


Enter third president's number: 42
Enter his name: Bill Clinton
Enter his quote: I did not have sexual relations with that woman.


The presidents are:
Richard Nixon, 37th president, said:
		"I am not a crook."
Donald Trump, 45th president, said:
		"Is our country still spending money on the GLOBAL WARMING HOAX?"
Bill Clinton, 42nd president, said:
		"I did not have sexual relations with that woman."

C:\Users\ashle\source\repos\HW_7a\x64\Debug\HW_7a.exe (process 5360) exited with code 0.
Press any key to close this window . . .
*/