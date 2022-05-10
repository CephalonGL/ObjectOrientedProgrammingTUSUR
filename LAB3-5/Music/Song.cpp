#include "../stdafx.h"
#include "../Music/Song.h"

Song::Song()
{
}

Song::Song(string name, int durationSeconds, Genre genre)
{
	SetName(name);
	SetDurationSeconds(durationSeconds);
	SetGenre(genre);
}

string Song::GetName()
{
	return _name;
}

void Song::SetName(string name)
{
	_name = name;
}

int Song::GetDurationSeconds()
{
	return _durationSeconds;
}

void Song::SetDurationSeconds(int durationSeconds)
{
	_durationSeconds = durationSeconds;
}

Genre Song::GetGenre()
{
	return _genre;
}

void Song::SetGenre(Genre genre)
{
	_genre = genre;
}
