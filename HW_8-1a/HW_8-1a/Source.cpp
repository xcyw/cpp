#include "Student.h"

int main()
{
	// variables
	int id, units;
	std::string name;

	// s1 instantialized
	Student s1;

	// s2 instantialized
	Student s2(100, "Tom P.Lee", 12);


	/* DISPLAYS S1 AND S2 */
	std::cout << "Here is student #1:\n";
	s1.displayRecord();

	std::cout << std::endl;

	std::cout << "Here is student #2:\n";
	s2.displayRecord();

	std::cout << std::endl;


	// set functions for s1
	s1.setID(101);
	s1.setName("John Lee Hooker");
	s1.setUnits(15);

	
	/* DISPLAYS S1 AFTER SET FUNCTIONS */
	std::cout << "Here is student #1 after the set functions:\n";
	s1.displayRecord();


	return 0;
}

/* OUTPUT
Here is student #1:
ID:         0
Name:
Units:      0

Here is student #2:
ID:         100
Name:       Tom P.Lee
Units:      12

Here is student #1 after the set functions:
ID:         101
Name:       John Lee Hooker
Units:      15

C:\Users\ashle\source\repos\HW_8-1a\x64\Debug\HW_8-1a.exe (process 44700) exited with code 0.
Press any key to close this window . . .
*/

/* OUTPUT HW_8-1B

*/