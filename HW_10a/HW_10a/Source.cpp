//==========================================
// Description:
// This program uses the "max" template function.
// It returns the greater of two values.
//==========================================
#include <iostream>
#include <algorithm>

int main()
{
	std::cout << "The greater value of 1 and 2        = " << std::max(1, 2) << std::endl;
	std::cout << "The greater value of 2 and 1        = " << std::max(2, 1) << std::endl;
	std::cout << "The greater value of a and z        = " << std::max('a', 'z') << std::endl;
	std::cout << "The greater value of 3.14 and 2.72  = " << std::max(3.14, 2.72) << std::endl;

	return 0;
}


/* OUTPUT 
The greater value of 1 and 2        = 2
The greater value of 2 and 1        = 2
The greater value of a and z        = z
The greater value of 3.14 and 2.72  = 3.14

C:\Users\ashle\source\repos\HW_10a\x64\Debug\HW_10a.exe (process 67472) exited with code 0.
Press any key to close this window . . .
*/
