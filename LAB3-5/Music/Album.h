#pragma once

class Album
{
private:

	string _name;

	int _releaseYear;

	vector<Song> _songs;

public:

	Album();
	Album(string name,
		  int releaseYear,
		  vector<Song> songs);

	string GetName();
	void SetName(string name);

	int GetReleaseYear();
	void SetReleaseYear(int releaseYear);

	vector<Song> GetSongs();
	void SetSongs(vector<Song> songs);

};

