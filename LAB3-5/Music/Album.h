#pragma once

class Album
{
private:

	string _name;

	int _releaseYear;

	vector<Song> _songs;

public:

	Album();
	// TODO: ��� �������� ������� �� �������� ����� ����������� ��� ��������� �����?
	Album(string name,
		  int releaseYear,
		  vector<Song> songs);

	string GetName();
	void SetName(string name);

	int GetReleaseYear();
	void SetReleaseYear(int releaseYear);

	// TODO: �� ��������?
	vector<Song> GetSongs();
	// TODO: �� ��������? ��� ��� ����������?
	void SetSongs(vector<Song> songs);

};

