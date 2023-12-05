#include "Car.h"

/* STATIC VARIABLES */
int Car::carCount = 0;

// default constructor
Car::Car()
{
	this->model = " ";
	this->year = 0;
	carCount++;
}

// overloaded constructor
Car::Car(std::string model, int year)
{
	this->model = model;
	this->year = year;
	carCount++;
}

// destructor
Car::~Car() {}

// model and year assigned to car
void Car::setCar(std::string model, int year)
{
	this->model = model;
	this->year = year;
}

// returns number of cars
int Car::getCount() const
{
	return carCount;
}

// displays car model and year
void Car::displayCar()
{
	std::cout << std::endl << "Model: " << this->model
			  << std::endl << "Year:  " << this->year
			  << std::endl << std::endl;
}

// compares two cars and displays whether or not they are the same
bool Car::operator == (Car& carTwo)
{
	if ((model == carTwo.model) && (year == carTwo.year))
		return true;
	else
		return false;
}