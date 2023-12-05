#include "Dog.h"

int main()
{
	// instantialized myDog
	Dog myDog("Spot", 5.5, 3);

	// instantialized yourDog
	Dog yourDog("Jack", 4.5, 3);


	/* OVERLOAD 4 OPERATORS (>=, <, ==, <<) */

	// overload the >= operator
	if (myDog >= 2)
		cout << "The dog is at least 2 years old.\n\n";
	else
		cout << "The dog is less than 2 years old.\n\n";

	// overload the < operator
	if (yourDog < myDog)
		cout << "Your dog weighs less than my dog.\n\n";
	else
		cout << "Your dog does not weigh less than my dog.\n\n";

	// overload the == operator
	if (myDog == yourDog)
		cout << "They have the same name.\n\n";
	else
		cout << "They do not have the same name.\n\n";

	// overload the << operator
	cout << yourDog << endl;
	
	return 0;
}

/* OUTPUT
The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME:   Jack
WEIGHT: 4.5 pounds
AGE:    3 years old

C:\Users\ashle\source\repos\HW_9a\x64\Debug\HW_9a.exe (process 40072) exited with code 0.
Press any key to close this window . . .
*/