#ifndef SONG_H_
#define SONG_H_

#include <iostream>
#include <string>
using namespace std;

class Song
{
private: 
	string title;
	string artist;
public:
	Song();                            // constructor
	Song(string title, string artist); // overload constructor
	~Song();                           // destructor
	void setTitle(string title);       // sets title
	void setArtist(string artist);     // sets artist
	void displaySong();                // displays title and artist 
};

#endif