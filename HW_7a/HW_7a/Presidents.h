#ifndef PRESIDENTS_H_
#define PRESIDENTS_H_

#include <iostream>
#include <string>
using namespace std;


class Presidents
{
private:
	int number;    // like Nixon was our 37th president
	string name;   // the president's name
	string quote;  // a famous quotation from the president

public:
	Presidents();                // default constructor
	~Presidents();               // destructor
	void setNumber(int number);  // a number is passed from main() and assigned to the data member number
	void setName(string name);   // a name is passed from main() and assigned to the data member name
	void setQuote(string quote); // a quote is passed from main() and assigned to the data member quote
	void displayPresidents();    // a list of presidents and their quotes are displayed on the screen
};

#endif /* PRESIDENTS_H_ */