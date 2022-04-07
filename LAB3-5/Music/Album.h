#pragma once

class Album
{
private:

	string _name;

	int _releaseYear;

	vector<Song> _songs;

public:

	Album();
	// TODO: при передаче вектора по значению будет создаваться его локальная копия?
	Album(string name,
		  int releaseYear,
		  vector<Song> songs);

	string GetName();
	void SetName(string name);

	int GetReleaseYear();
	void SetReleaseYear(int releaseYear);

	// TODO: по значению?
	vector<Song> GetSongs();
	// TODO: по значению? Как это отработает?
	void SetSongs(vector<Song> songs);

};

