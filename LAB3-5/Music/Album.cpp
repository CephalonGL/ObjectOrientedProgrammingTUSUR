#include "Album.h"

Album::Album()
{
}

Album::Album(string name, int releaseYear, vector<Song> songs)
{
	SetName(name);
	SetReleaseYear(releaseYear);
	SetSongs(songs);
}

string Album::GetName()
{
	return _name;
}

void Album::SetName(string name)
{
	_name = name;
}

int Album::GetReleaseYear()
{
	return _releaseYear;
}

void Album::SetReleaseYear(int releaseYear)
{
	if (releaseYear > 0)
	{
		_releaseYear = releaseYear;
	}
	else
	{
		throw exception("Error: release year is out of range.");
	}
}

vector<Song> Album::GetSongs()
{
	return _songs;
}

void Album::SetSongs(vector<Song> songs)
{
	_songs = songs;
}
