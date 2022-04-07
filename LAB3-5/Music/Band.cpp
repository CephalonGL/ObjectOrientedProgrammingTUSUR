#include "..\stdafx.h"

Band::Band()
{
}

Band::Band(string name, string description, vector<Album> albums)
{
	SetName(name);
	SetDescription(description);
	SetAlbums(albums);
}

string Band::GetName()
{
	return _name;
}

void Band::SetName(string name)
{
	_name = name;
}

string Band::GetDescription()
{
	return _description;
}

void Band::SetDescription(string description)
{
	_description = description;
}

vector<Album> Band::GetAlbums()
{
	return _albums;
}

void Band::SetAlbums(vector<Album> albums)
{
	_albums = albums;
}

Song* Band::FindSong(string name)
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

void Band::DemoBand()
{
	const int COUNT_OF_ALBUMS = 3;
	vector<Song> songs[COUNT_OF_ALBUMS];
	songs[0].push_back(Song("I Don’t Know Why", 190, Electro));
	songs[0].push_back(Song("Whatever It Takes", 201, Electro));
	songs[0].push_back(Song("Believer", 204, Electro));
	songs[0].push_back(Song("Walking The Wire", 233, Electro));

	songs[1].push_back(Song("Radioactive", 188, IndieRock));
	songs[1].push_back(Song("Demons", 178, IndieRock));
	songs[1].push_back(Song("Bleeding Out", 223, IndieRock));
	songs[1].push_back(Song("It's Time", 240, IndieRock));

	songs[2].push_back(Song("Natural", 190, PopRock));
	songs[2].push_back(Song("Zero", 212, PopRock));
	songs[2].push_back(Song("Boomerang", 187, PopRock));
	songs[2].push_back(Song("Machine", 182, PopRock));

	vector<Album> albums;
	albums.push_back(Album("Evolve", 2017, songs[0]));
	albums.push_back(Album("Night Visions", 2012, songs[1]));
	albums.push_back(Album("Origins", 2018, songs[2]));

	Band band("Imagine Dragons", "American indie-rock-group", albums);

	string searchingSongName = "Zero";
	cout << "Duration of song \"" << searchingSongName << "\": " <<
		band.FindSong(searchingSongName)->GetDurationSeconds()
		<< "seconds." << endl;

	cout << "Song \"" << searchingSongName << "\" is in \""
		<< band.FindAlbum(band.FindSong(searchingSongName))
		<< "\" album." << endl;

	cout << "Here you can see all songs of this band:" << endl;
	for (int i = 0; i < band.GetAlbums().size(); i++)
	{
		for (int j = 0; j < band.GetAlbums()[i].GetSongs().size(); j++)
		{
			cout << i + j + 1 << ". "
				<< band.GetAlbums()[i].GetSongs()[j].GetName() << ", "
				<< band.GetAlbums()[i].GetSongs()[j].GetDurationSeconds()
				<< " sec, ";
			switch (band.GetAlbums()[i].GetSongs()[j].GetGenre())
			{
				case IndieRock:
				{
					cout << "indie-rock.";
				}
				case PopRock:
				{
					cout << "pop-rock.";
				}
				case Electro:
				{
					cout << "electro.";
				}
			}
			cout << endl;
		}
	}

	Genre findingGenre = Electro;
	cout << "Here you can see all songs with genre ";
	switch (findingGenre)
	{
		case IndieRock:
		{
			cout << "indie-rock";
		}
		case PopRock:
		{
			cout << "pop-rock";
		}
		case Electro:
		{
			cout << "electro";
		}
	}
	cout << ":" << endl;
	vector<Song> genreSongs = *band.GetAllGenreSongs(findingGenre);
	for (int i = 0; i < genreSongs.size(); i++)
	{
		cout << i+1 << ". " << genreSongs[i].GetName()
			<< ", " << genreSongs[i].GetDurationSeconds()
			<< " sec" << endl;
	}
}
