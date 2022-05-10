#include "stdafx.h"
#include "ProgramBand.h"

void BandProgram::DemoBand()
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
		cout << i + 1 << ". " << genreSongs[i].GetName()
			<< ", " << genreSongs[i].GetDurationSeconds()
			<< " sec" << endl;
	}
}
