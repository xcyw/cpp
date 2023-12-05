#include "Book.h"

/* STATIC VARIABLES */
int Book::bookCount = 0;

// default constructor
Book::Book()
{
	isbn  = "";
	year  = 0;
	price = 0;
	bookCount++;
}

// overloaded constructor 
Book::Book(string isbn, int year, double price)
{
	this->isbn  = isbn;
	this->year  = year;
	this->price = price;
	bookCount++;
}

// destructor
Book::~Book() {}

// displays Book isbn, year, and price
void Book::displayBook() const
{
	cout << "ISBN:  " << this->isbn  << endl
		 << "Year:  " << this->year  << endl
		 << "Price: " << this->price << endl;
}

// returns bookCount to main
int Book::getCount()
{
	return bookCount;
}

/* OVERLOADED OPERATORS */
// used to compare prices of two Book objects
bool Book::operator>(Book& thisBook)
{
	return price > thisBook.price;
}
bool Book::operator==(Book& thisBook)
{
	return price == thisBook.price;
}

// used to compare an object's price to the price given
bool Book::operator>(int num)
{
	return price > num;
}

// used to add prices of two Book objects
double Book::operator+(Book& thisBook)
{
	return price + thisBook.price;
}

// used to compare an object's year to the year given
bool Book::operator<(int num)
{
	return year < num;
}

// overload the insertion operator
ostream& operator <<(ostream& stream, Book& myBook)
{
	stream << "ISBN:  " << myBook.isbn  << endl
		   << "Year:  " << myBook.year  << endl
		   << "Price: " << myBook.price << endl;
	return stream;
}

// overload the extraction operator
istream& operator >>(istream& stream, Book& myBook)
{
	cout   << "ISBN:  ";
	getline(stream, myBook.isbn);

	cout   << "Year:  ";
	stream >> myBook.year;
	cin.ignore();
	
	cout   << "Price: ";
	stream >> myBook.price;
	cin.ignore();

	return stream;
}