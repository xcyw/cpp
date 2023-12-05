#include "Presidents.h"

// default constructor
Presidents::Presidents()
{
	number = 0;
	name   = "";
	quote  = "";
}

// destructor
Presidents::~Presidents() {}

// a number is passed from main() and assigned to the data member number
void Presidents::setNumber(int number)
{
	this->number = number;
}

// a name is passed from main() and assigned to the data member name
void Presidents::setName(string name)
{
	this->name = name;
}

// a quote is passed from main() and assigned to the data member quote
void Presidents::setQuote(string quote)
{
	this->quote = quote;
}

// a list of presidents and their quotes are displayed on the screen
void Presidents::displayPresidents()
{
	string num;
	int endNum = number % 10;

	switch (endNum)
	{
	case 1: num = "st";
		break;
	case 2: num = "nd";
		break;
	case 3: num = "rd";
		break;
	default: num = "th";
	}

	if (number > 10 && number < 20)
	{
		num = "th";
	}

	cout << name << ", "  << number << num << " president, said:\n"
		 << "\t\"" << quote << "\"";
}