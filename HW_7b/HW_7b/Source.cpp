#include "Cat.h"

int main()
{
	// variables
	Cat Fluffy, Tom, Kitty;

	int weight;
	string color;


	/* PROMPTS CATS INFO */

	// prompts for Fluffy's info
	cout << "Describe Fluffy. What does she weigh? ";
	cin >> weight;
	cin.ignore();
	Fluffy.setWeight(weight);

	cout << "What color is she? ";
	getline(cin, color);
	Fluffy.setColor(color);

	// prompts for Tom's info
	cout << endl;

	cout << "Describe Tom. What does he weigh? ";
	cin >> weight;
	cin.ignore();
	Tom.setWeight(weight);

	cout << "What color is he? ";
	getline(cin, color);
	Tom.setColor(color);

	// prompts for Kitty's info
	cout << endl;

	cout << "Describe Kitty. What does she weigh? ";
	cin >> weight;
	cin.ignore();
	Kitty.setWeight(weight);

	cout << "What color is she? ";
	getline(cin, color);
	Kitty.setColor(color);


	/* OUTPUTS CATS INFO */
	cout << endl << endl;

	cout << "Fluffy ";
	Fluffy.displayInfo();
	cout << endl;

	cout << "Tom ";
	Tom.displayInfo();
	cout << endl;

	cout << "Kitty ";
	Kitty.displayInfo();
	cout << endl;


	/* CATS MEOW */
	cout << endl << endl;

	cout << "Fluffy ";
	Fluffy.meow();
	cout << endl;

	cout << "Tom ";
	Tom.meow();
	cout << endl;

	cout << "Kitty ";
	Kitty.meow();
	cout << endl;



	return 0;
}

/* OUTPUT
Describe Fluffy. What does she weigh? 4
What color is she? brown

Describe Tom. What does he weigh? 09
What color is he? orange

Describe Kitty. What does she weigh? 5
What color is she? white


Fluffy weighs 4 pounds and is brown.
Tom weighs 9 pounds and is orange.
Kitty weighs 5 pounds and is white.


Fluffy says: MEOW!
Tom says: MEOW!
Kitty says: MEOW!

C:\Users\ashle\source\repos\HW_7b\x64\Debug\HW_7b.exe (process 24204) exited with code 0.
Press any key to close this window . . .
*/