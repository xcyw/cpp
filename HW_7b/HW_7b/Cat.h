#ifndef CAT_H_
#define CAT_H_

#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
	float weight;
	string color;
public:
	Cat();                       // constructor
	~Cat();                      // destructor
	void setWeight(int weight);  // set the cat's weight
	void setColor(string color); // set the cat's color
	void displayInfo();          // display cat's weight and color
	void meow();                 // lets the cat say "Meow"
};	
#endif