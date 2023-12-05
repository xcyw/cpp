#ifndef CAR_H_
#define CAR_H_

#include <iostream>

class Car
{
private:
	std::string model;
	int year;
	static int carCount;
public:
	// default constructor
	Car();

	// overloaded constructor
	Car(std::string model, int year);

	// destructor
	~Car();

	// model and year assigned to car
	void setCar(std::string mode, int year);

	// returns number of cars
	int getCount() const;

	// displays car model and year
	void displayCar();

	// compares two cars and displays whether or not they are the same
	bool operator == (Car& carTwo);
};
#endif