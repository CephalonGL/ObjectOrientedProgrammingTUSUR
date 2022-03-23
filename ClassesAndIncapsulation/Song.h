#pragma once
#include "Includes.h"
#include "Genre.h"

class Song
{
private:

	string _name;

	int _durationSeconds;

	Genre _genre;

public:

	Song();
	Song(string name,
		 int durationSeconds,
		 Genre genre);

	string GetName();
	void SetName(string name);

	int GetDurationSeconds();
	void SetDurationSeconds(int durationSeconds);

	Genre GetGenre();
	void SetGenre(Genre genre);
};

