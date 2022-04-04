#pragma once

// TODO: вектор хранение и передача по значению или по ссылке? »ли по указателю? ¬о всех методах
class Band
{
private:

	string _name;

	string _description;

	vector<Album> _albums;

public:

	Band();

	Band(string name,
		 string description,
		 vector<Album> albums);

	string GetName();

	void SetName(string name);

	string GetDescription();

	void SetDescription(string description);

	vector<Album> GetAlbums();

	void SetAlbums(vector<Album> albums);



	Song* FindSong(string name);

	Album* FindAlbum(Song* song);

	vector<Song>* GetAllSongs();

	vector<Song>* GetAllGenreSongs(Genre findingGenre);



	static void DemoBand();

};

