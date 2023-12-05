#ifndef DOG_H_
#define DOG_H_

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	float weight;
	int age;
public:
	// constructor
	Dog(string name, float weight, int age)
	{
		this->name   = name;
		this->weight = weight;
		this->age    = age;
	}

	// destructor
	~Dog() {}

	// displays name, weight, and age of dog
	void displayDog()
	{
		cout << "NAME:   " << name   << endl
			 << "WEIGHT: " << weight << " pounds"    << endl
			 << "AGE:    " << age    << " years old" << endl;
	}

	// overloading >=
	bool operator >= (int age)
	{
		if (age >= 2)
			return true;
		else
			return false;
	}

	// overloading <
	bool operator < (Dog& myDog)
	{
		if (weight < myDog.weight)
			return true;
		else
			return false;
	}

	// overloading ==
	bool operator == (Dog& yourDog)
	{
		if (name == yourDog.name)
			return true;
		else
			return false;
	}

	// overloading <<
	friend ostream& operator <<(ostream& stream, Dog& dog)
	{
		string pounds = " pounds";
		string years = " years old";

		stream << "NAME:   " << dog.name   << endl
			   << "WEIGHT: " << dog.weight << pounds << endl
			   << "AGE:    " << dog.age    << years;
		return stream;
	}
};

#endif