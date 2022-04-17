#include "..\stdafx.h"

Band::Band()
{
}

Band::Band(string& name, string& description, vector<Album>& albums)
{
	SetName(name);
	SetDescription(description);
	SetAlbums(albums);
}

string Band::GetName()
{
	return _name;
}

void Band::SetName(string& name)
{
	_name = name;
}

string Band::GetDescription()
{
	return _description;
}

void Band::SetDescription(string& description)
{
	_description = description;
}

vector<Album> Band::GetAlbums()
{
	return _albums;
}

void Band::SetAlbums(vector<Album>& albums)
{
	_albums = albums;
}

Song* Band::FindSong(string& name)
{
	for (int i = 0; i < _albums.size(); i++)
	{
		for (int j = 0; j < _albums[i].GetSongs().size(); i++)
		{
			if (name == _albums[i].GetSongs()[j].GetName())
			{
				return &_albums[i].GetSongs()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < _albums.size(); i++)
	{
		for (int j = 0; j < _albums[i].GetSongs().size(); j++)
		{
			if (song == &_albums[i].GetSongs()[j])
			{
				return &_albums[i];
			}
		}
	}
	return nullptr;
}

vector<Song>* Band::GetAllSongs()
{
	vector<Song>* allSongs = new vector<Song>;

	for (int i = 0; i < GetAlbums().size(); i++)
	{
		for (int j = 0; j < GetAlbums()[i].GetSongs().size(); j++)
		{
			allSongs->push_back(GetAlbums()[i].GetSongs()[j]);
		}
	}
	if (allSongs->empty())
	{
		delete allSongs;
		return nullptr;
	}
	else
	{
		return allSongs;
	}
}

vector<Song>* Band::GetAllGenreSongs(Genre findingGenre)
{
	vector<Song>* allGenreSongs = new vector<Song>;

	for (int i = 0; i < GetAlbums().size(); i++)
	{
		for (int j = 0; j < GetAlbums()[i].GetSongs().size(); j++)
		{
			if (findingGenre == GetAlbums()[i].GetSongs()[j].GetGenre())
			{
				allGenreSongs->push_back(GetAlbums()[i].GetSongs()[j]);
			}
		}
	}
	if (allGenreSongs->empty())
	{
		delete allGenreSongs;
		return nullptr;
	}
	else
	{
		return allGenreSongs;
	}
}

