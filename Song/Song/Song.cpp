#include "Song.h"

// constructor
Song::Song() {}

// overload constructor
Song::Song(string title, string artist)
{
	this->title  = title;
	this->artist = artist;
}

// destructor
Song::~Song() {}

// sets title
void Song::setTitle(string title)
{
	this->title = title;
}

// sets artist
void Song::setArtist(string artist)
{
	this->artist = artist;
}

// displays title and artist
void Song::displaySong()
{
	cout << "Title:  " << title << endl;
	cout << "Artist: " << artist;
	cout << endl;
}