#ifndef BOOK_H_
#define BOOK_H_

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Book
{
private:
	string isbn;
	int year;
	double price;
	static int bookCount;

public:
	// default constructor
	Book();

	// overloaded constructor
	Book(string isbn, int year, double price);

	// destructor
	~Book();

	// displays Book isbn, year, and price
	void displayBook() const;

	// returns bookCount to main
	int getCount();

	/* OVERLOADED OPERATORS */
	// used to compare prices of two Book objects
	bool operator >(Book& thisBook);
	bool operator ==(Book& thisBook);

	// used to compare an object's price to the price given
	bool operator >(int num);

	// used to add prices of two Book objects
	double operator +(Book& thisBook);

	// used to compare an object's year to the year given
	bool operator <(int num);

	// overload the insertion operator
	friend ostream& operator <<(ostream& stream, Book& myBook);

	// overload the extraction operator
	friend istream& operator >>(istream& stream, Book& myBook);

};

#endif