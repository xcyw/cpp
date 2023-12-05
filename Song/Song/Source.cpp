#include "Song.h"

int main()
{
	// variables
	Song yourSong;
	string title, artist;

	// overload constructor anotherSong
	Song anotherSong("All of Me", "Billie Holliday");

	/* DISPLAYS yourSong AND anontherSong */
	cout << "Here are the songs:\n\n";

	cout << "Your song:\n";
	yourSong.displaySong();

	cout << endl;

	cout << "Another song:\n";
	anotherSong.displaySong();


	// prompts for yourSong info
	cout << endl;
	cout << "Enter information about your song:\n";

	cout << "Title:  ";
	getline(cin, title);
	yourSong.setTitle(title);

	cout << "Artist: ";
	getline(cin, artist);
	yourSong.setArtist(artist);

	// displays yourSong info
	cout << endl;
	cout << "Here is your song (after the set functions):\n";
	yourSong.displaySong();

	return 0;
}

/* OUTPUT 
Here are the songs:

Your song:
Title:
Artist:

Another song:
Title:  All of Me
Artist: Billie Holliday

Enter information about your song:
Title:  Like a Prayer
Artist: Madonna

Here is your song (after the set functions):
Title:  Like a Prayer
Artist: Madonna

C:\Users\ashle\source\repos\Song\x64\Debug\Song.exe (process 19908) exited with code 0.
Press any key to close this window . . .
*/