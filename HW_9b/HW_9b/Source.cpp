#include "Car.h"

// compares two cars to see if they are the same

int main()
{
	// variables
	Car myCar;
	Car yourCar("Toyota", 2007);
	static int carCount;


	// displays both cars
	std::cout << "My Car";
	myCar.displayCar();

	std::cout << "Your Car";
	yourCar.displayCar();


	// sets myCar to a 2002 Ford
	myCar.setCar("Ford", 2002);


	// displays myCar
	std::cout << "My Car";
	myCar.displayCar();


	// compare myCar with yourCar and display whether or not
	// they are the same. (see output)
	if (myCar == yourCar)
		std::cout << "The two cars are the same model and year.";
	else
		std::cout << "The two cars are not the same model and year.";

	std::cout << std::endl << std::endl;


	// outputs number of cars
	carCount = yourCar.getCount();

	std::cout << carCount << " cars have been declared.\n";


	return 0;
}

/* OUTPUT
My Car
Model:
Year:  0

Your Car
Model: Toyota
Year:  2007

My Car
Model: Ford
Year:  2002

The two cars are not the same model and year.

2 cars have been declared.

C:\Users\ashle\source\repos\HW_9b\x64\Debug\HW_9b.exe (process 27404) exited with code 0.
Press any key to close this window . . .
*/