#include "Cat.h"


// constructor
Cat::Cat()
{
	weight = 0;
	color  = "";
}

// destructor
Cat::~Cat() {}

// set the cat's weight
void Cat::setWeight(int weight)
{
	this->weight = weight;
}

// set the cat's color
void Cat::setColor(string color)
{
	this->color = color;
}

// display cat's weight and color
void Cat::displayInfo()
{
	cout << "weighs " << weight << " pounds and is " << color << ".";
}

// lets the cat say "Meow"
void Cat::meow()
{
	cout << "says: MEOW!";
}