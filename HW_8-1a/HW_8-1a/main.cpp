#include "UnderGrad.h"
#include "Grad.h"

int main()
{
	// underGrad instantialized
	UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");

	// grad instantialized
	Grad grad(101, "Jim Jones", 12, "PHD");


	/* DISPLAY underGrad */
	underGrad.displayRecord();

	std::cout << std::endl;

	/* DISPLAY grad */
	grad.displayRecord();

	std::cout << std::endl;

	// setUnit() function for grad
	grad.setUnits(15);


	/* DISPLAY grad AFTER setUnit() FUNCTION */
	grad.displayRecord();


	return 0;
}

/* OUTPUT 
ID:         100
Name:       Tom Lee
Units:      9
Class:      Freshman

ID:         101
Name:       Jim Jones
Units:      12
Degree:     PHD

ID:         101
Name:       Jim Jones
Units:      15
Degree:     PHD

C:\Users\ashle\source\repos\HW_8-1a\x64\Debug\HW_8-1a.exe (process 16860) exited with code 0.
Press any key to close this window . . .
*/