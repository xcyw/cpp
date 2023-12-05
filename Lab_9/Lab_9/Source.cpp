#include "Book.h"

int main()
{

	Book b1("0-12345-9", 1990, 12.50);
	Book b2("0-54321-9", 2001, 7.75);
	Book b3;
	double avg;
	int bookCount;

	cout << "Here is book #1:\n";
	b1.displayBook();

	cout << endl;

	cout << "Here is book #2:\n";
	b2.displayBook();

	cout << endl;

	// display bookCount
	bookCount = b1.getCount();
	cout << "There are " << bookCount << " books.\n";
	cout << "\n--------------------\n\n";


	// compares if the price of Book #1 is greater than Book #2
	if (b1 > b2)
	{
		cout << "Book #1 has a higher price.\n";
	}
	else
	{
		cout << "Book #1 does not have a higher price.\n";
	}

	cout << endl;
	// compares if the price of Book #1 is equal to Book #2
	if (b1 == b2)
	{
		cout << "They are the same price.\n";
	}
	else
	{
		cout << "Not the same price.\n";
	}

	cout << endl;
	// checks to see if Book #2 price is more than $10.00
	if (b2 > 10)
	{
		cout << "The price is more than $10.00.\n";
	}
	else
	{
		cout << "The price is not more than $10.00.\n";
	}

	cout << endl;
	// displays the average book price of Book #1 and Book #2
	avg = (b1 + b2) / 2;
	cout << "The average book price is " << avg << ".\n";

	cout << endl;
	// checks if Book #1 was published before 2000
	if (b1 < 2000)
	{
		cout << "The book was published before 2000.\n";
	}
	else
	{
		cout << "The book was not published before 2000.\n";
	}


	cout << endl;
	// Use this: friend ostream& operator<<();
	cout << b1;


	// Use this: friend istream& operator>>();
	cout << "\nEnter Book #3 information.\n";
	cin >> b3;


	// Use this: friend ostream& operator<<();
	cout << "\nHere is what you entered for Book #3:\n";
	cout << b3;

	return 0;
}

/* OUTPUT
Here is book #1:
ISBN:  0-12345-9
Year:  1990
Price: 12.5

Here is book #2:
ISBN:  0-54321-9
Year:  2001
Price: 7.75

There are 3 books.

--------------------

Book #1 has a higher price.

Not the same price.

The price is not more than $10.00.

The average book price is 10.125.

The book was published before 2000.

ISBN:  0-12345-9
Year:  1990
Price: 12.5

Enter Book #3 information.
ISBN:  0-98765-9
Year:  2004
Price: 5.75

Here is what you entered for Book #3:
ISBN:  0-98765-9
Year:  2004
Price: 5.75

C:\Users\ashle\source\repos\Lab_9\x64\Debug\Lab_9.exe (process 55532) exited with code 0.
Press any key to close this window . . .

*/